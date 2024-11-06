static NSURLSession* unityWebRequestSession;
static NSRecursiveLock* unityWebRequestLock;

@interface UnityURLRequest : NSMutableURLRequest

@property (readonly, nonatomic) void* udata;
@property (readwrite, nonatomic) NSUInteger taskIdentifier;
@property (readonly, nonatomic) long long estimatedContentLength;
@property (readonly, nonatomic) long long receivedBytes;
@property (readwrite, nonatomic) bool wantCertificateCallback;
@property (readwrite, nonatomic) bool redirecting;
@property (readonly) bool isDone;

- (id)init:(void*)udata;

@end

static NSMutableArray<UnityURLRequest*>* currentRequests;

@implementation UnityURLRequest
{
    void* _udata;
    NSUInteger _taskIdentifier;
    long long _estimatedContentLength;
    long long _receivedBytes;
    bool _wantCertificateCallback;
    bool _redirecting;
    bool _isDone;
}

@synthesize udata = _udata;
@synthesize taskIdentifier = _taskIdentifier;
@synthesize estimatedContentLength = _estimatedContentLength;
@synthesize receivedBytes = _receivedBytes;
@synthesize wantCertificateCallback = _wantCertificateCallback;
@synthesize redirecting = _redirecting;
@synthesize isDone = _isDone;

+ (UnityURLRequest*)requestForTask:(NSURLSessionTask*)task
{
    UnityURLRequest* request = nil;
    [unityWebRequestLock lock];
    for (unsigned i = 0; i < currentRequests.count; ++i)
        if (currentRequests[i].taskIdentifier == task.taskIdentifier)
        {
            request = currentRequests[i];
            break;
        }
    [unityWebRequestLock unlock];
    return request;
}

+ (void)removeRequest:(UnityURLRequest* _Nonnull)request
{
    // removeObject would remove all identical requests, taskIdentifier is unique
    for (unsigned i = 0; i < currentRequests.count; ++i)
        if (currentRequests[i].taskIdentifier == request.taskIdentifier)
        {
            [currentRequests removeObjectAtIndex: i];
            break;
        }
}

- (id)init:(void*)udata
{
    self = [super init];
    _udata = udata;
    _taskIdentifier = 0;
    _estimatedContentLength = 0;
    _receivedBytes = 0;
    _wantCertificateCallback = false;
    _redirecting = false;
    _isDone = false;
    return self;
}

- (void)updateEstimatedContentLength:(long long)contentLength
{
    if (contentLength > _estimatedContentLength)
        _estimatedContentLength = contentLength;
}

- (void)updateReceivedBytes:(long long)receivedBytes
{
    _receivedBytes += receivedBytes;
    if (_receivedBytes > _estimatedContentLength)
        _estimatedContentLength = _receivedBytes;
}

- (void)markDone
{
    _isDone = true;
}

@end


@interface UnityWebRequestDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
@end


@interface UnityWebRequestUploadStream : NSInputStream

+ (id)createForRequest:(void*)request totalBytes:(UInt64)totalBytes;
- (NSStreamStatus)streamStatus;
- (void)open;
- (void)close;
- (NSInteger)read:(uint8_t *)buffer maxLength:(NSUInteger)len;
- (BOOL)getBuffer:(uint8_t * _Nullable *)buffer length:(NSUInteger *)len;
- (BOOL)hasBytesAvailable;
- (void)setDelegate:(id<NSStreamDelegate>)delegate;
- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSRunLoopMode)mode;
- (void)removeFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSRunLoopMode)mode;

@end


@implementation UnityWebRequestDelegate

- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveResponse:(nonnull NSURLResponse *)response completionHandler:(nonnull void (^)(NSURLSessionResponseDisposition))completionHandler
{
    [self handleResponse: response task: dataTask];
    completionHandler(NSURLSessionResponseAllow);
}

- (void)handleResponse:(NSURLResponse*)response task:(NSURLSessionTask*)task
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
    if (urequest == nil)
        return;
    if ([response isKindOfClass: [NSHTTPURLResponse class]])
        [self handleHTTPResponse: (NSHTTPURLResponse*)response urequest: urequest];
    else
        [self handleResponse: response urequest: urequest];
}

- (void)handleHTTPResponse:(NSHTTPURLResponse*)response task:(NSURLSessionTask*)task
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
    if (urequest == nil)
        return;
    [self handleHTTPResponse: response urequest: urequest];
}

- (void)handleHTTPResponse:(NSHTTPURLResponse*)response urequest:(UnityURLRequest*)urequest
{
    UnityReportWebRequestStatus(urequest.udata, (int)[response statusCode]);
    NSDictionary* respHeader = [response allHeaderFields];
    NSEnumerator* headerEnum = [respHeader keyEnumerator];
    for (id headerKey = [headerEnum nextObject]; headerKey; headerKey = [headerEnum nextObject])
        UnityReportWebRequestResponseHeader(urequest.udata, [headerKey UTF8String], [[respHeader objectForKey: headerKey] UTF8String]);
    [self handleResponse: response urequest: urequest];
}

- (void)handleResponse:(NSURLResponse*)response urequest:(UnityURLRequest*)urequest
{
    [urequest updateEstimatedContentLength: response.expectedContentLength];
    UnityReportWebRequestReceivedResponse(urequest.udata, (unsigned int)urequest.estimatedContentLength);
}

- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveData:(NSData *)data
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: dataTask];
    if (urequest == nil)
        return;
    [urequest updateEstimatedContentLength: [dataTask countOfBytesExpectedToReceive]];
    [data enumerateByteRangesUsingBlock:^(const void* bytes, NSRange range, BOOL* stop) {
        UnityReportWebRequestReceivedData(urequest.udata, bytes, (unsigned int)range.length, (unsigned int)urequest.estimatedContentLength);
    }];
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)response newRequest:(NSURLRequest *)request completionHandler:(void (^)(NSURLRequest * _Nullable))completionHandler
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
    if (urequest == nil)
    {
        completionHandler(nil);
        return;
    }
    urequest.redirecting = true;
    [self handleHTTPResponse: response task: task];
    completionHandler(nil);
    [task cancel];
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition, NSURLCredential* credential))completionHandler
{
    if ([[challenge protectionSpace] authenticationMethod] == NSURLAuthenticationMethodServerTrust)
    {
        UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
        if (urequest == nil || !urequest.wantCertificateCallback)
        {
            completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
            return;
        }

#if !defined(DISABLE_WEBREQUEST_CERTIFICATE_CALLBACK)
        SecTrustResultType systemResult = kSecTrustResultProceed;
        CFErrorRef error;
        SecTrustRef serverTrust = [[challenge protectionSpace] serverTrust];
        if (serverTrust == nil)
            systemResult = kSecTrustResultOtherError;
        else if (!SecTrustEvaluateWithError(serverTrust, &error))
        {
            SecTrustGetTrustResult(serverTrust, &systemResult);
        }

        switch (systemResult)
        {
            case kSecTrustResultUnspecified:
            case kSecTrustResultProceed:
            case kSecTrustResultRecoverableTrustFailure:
                break;
            default:
                completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
                return;
        }

        SecCertificateRef serverCertificate = SecTrustGetCertificateAtIndex(serverTrust, 0);
        if (serverCertificate != nil)
        {
            CFDataRef serverCertificateData = SecCertificateCopyData(serverCertificate);
            const UInt8* const data = CFDataGetBytePtr(serverCertificateData);
            const CFIndex size = CFDataGetLength(serverCertificateData);
            bool trust = UnityReportWebRequestValidateCertificate(urequest.udata, (const char*)data, (unsigned)size);
            CFRelease(serverCertificateData);
            if (trust)
            {
                NSURLCredential *credential = [NSURLCredential credentialForTrust: challenge.protectionSpace.serverTrust];
                completionHandler(NSURLSessionAuthChallengeUseCredential, credential);
                return;
            }
        }
#endif
        completionHandler(NSURLSessionAuthChallengeCancelAuthenticationChallenge, nil);
        return;
    }
    else
        completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task needNewBodyStream:(void (^)(NSInputStream * _Nullable))completionHandler
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
    UInt64 length = 0;
    if (urequest != nil)
        length = UnityWebRequestResetUpload(urequest.udata);
    if (urequest == nil || length == 0)
    {
        [task cancel];
        completionHandler(nil);
        return;
    }

    NSInputStream* stream = [UnityWebRequestUploadStream createForRequest: urequest.udata totalBytes: length];
    completionHandler(stream);
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error
{
    UnityURLRequest* urequest = [UnityURLRequest requestForTask: task];
    if (urequest == nil)
        return;
    [urequest markDone];
    if (!urequest.redirecting)
    {
        if (error != nil)
            UnityReportWebRequestNetworkError(urequest.udata, (int)[error code]);
    }
    UnityReportWebRequestFinishedLoadingData(urequest.udata);
    UnityWebRequestRelease(urequest.udata);
}

- (void)URLSession:(NSURLSession *)session didBecomeInvalidWithError:(NSError *)error
{
    [unityWebRequestLock lock];
    unityWebRequestSession = nil;
    [unityWebRequestLock unlock];
}

@end


@implementation UnityWebRequestUploadStream
{
    void* _request;
    UInt64 _totalBytes;
    NSStreamStatus _status;
}

+ (id)createForRequest:(void*)request totalBytes:(UInt64)totalBytes
{
    return [[UnityWebRequestUploadStream alloc] initWithRequest: request totalBytes: totalBytes];
}

- (id)initWithRequest:(void*)request totalBytes:(UInt64)totalBytes
{
    self = [self init];
    _request = request;
    _totalBytes = totalBytes;
    _status = NSStreamStatusNotOpen;
    return self;
}

- (NSStreamStatus)streamStatus
{
    return _status;
}

- (void)open
{
    _status = NSStreamStatusOpen;
}

- (void)close
{
    _status = NSStreamStatusClosed;
}

- (NSInteger)read:(uint8_t *)buffer maxLength:(NSUInteger)len
{
    unsigned dataSize = (unsigned)len;
    const UInt8* data = (const UInt8*)UnityWebRequestGetUploadData(_request, &dataSize);
    if (dataSize == 0)
        return 0;
    memcpy(buffer, data, dataSize);
    UnityWebRequestConsumeUploadData(_request, dataSize);
    _totalBytes -= dataSize;
    if (_totalBytes == 0)
        _status = NSStreamStatusAtEnd;
    return dataSize;
}

- (BOOL)getBuffer:(uint8_t * _Nullable *)buffer length:(NSUInteger *)len
{
    return NO;
}

- (BOOL)hasBytesAvailable
{
    return _totalBytes > 0;
}

- (void)setDelegate:(id<NSStreamDelegate>)delegate
{
}

- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSRunLoopMode)mode
{
}

- (void)removeFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSRunLoopMode)mode
{
}

- (id)propertyForKey:(NSStreamPropertyKey)key
{
    return nil;
}

- (BOOL)setProperty:(id)property forKey:(NSStreamPropertyKey)key
{
    return NO;
}

@end


const int WEB_ERROR_OK = 0;
const int WEB_ERROR_MALFORMATTED_URL = 5;

extern "C" void UnityWebRequestAddCustomHeader(void** headers, const char* headerName, const char* headerValue)
{
    @autoreleasepool
    {
        NSMutableDictionary* headerDict = (__bridge NSMutableDictionary*)*headers;
        if (headerDict == nil)
        {
            headerDict = [[NSMutableDictionary alloc] init];
            *headers = (__bridge_retained void*)headerDict;
        }

        [headerDict setValue: [NSString stringWithUTF8String: headerValue] forKey: [NSString stringWithUTF8String: headerName]];
    }
}

extern "C" int UnityCreateWebRequestBackend(void** connection, void* udata, const char* methodString, const void* headerDict, const char* url)
{
    @autoreleasepool
    {
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            @autoreleasepool
            {
                currentRequests = [[NSMutableArray<UnityURLRequest*> alloc] init];
                unityWebRequestLock = [[NSRecursiveLock alloc] init];
            }
        });

        NSDictionary* headers = (__bridge_transfer NSDictionary*)headerDict;
        NSURL* requestUrl;
#if defined(__IPHONE_17_0)
        if (@available(iOS 17.0, tvOS 17.0, *))
            requestUrl = [NSURL URLWithString: [NSString stringWithUTF8String: url] encodingInvalidCharacters: NO];
        else
#endif
            requestUrl = [NSURL URLWithString: [NSString stringWithUTF8String: url]];

        if (requestUrl == nil)
            return WEB_ERROR_MALFORMATTED_URL;

        UnityURLRequest* request = [[UnityURLRequest alloc] init: udata];
        request.URL = requestUrl;
        request.HTTPMethod = [NSString stringWithUTF8String: methodString];
        request.allHTTPHeaderFields = headers;
        [request setCachePolicy: NSURLRequestReloadIgnoringLocalCacheData];

        // set or replace backend under lock
        // replace means we are redirecting, so we discard previous result
        [unityWebRequestLock lock];
        UnityURLRequest* previous = (__bridge_transfer UnityURLRequest*)*connection;
        *connection = (__bridge_retained void*)request;
        previous = nil;
        [unityWebRequestLock unlock];
        return WEB_ERROR_OK;
    }
}

extern "C" void UnitySendWebRequest(void* const* connection, unsigned length, unsigned long timeoutSec, bool wantCertificateCallback)
{
    @autoreleasepool
    {
        [unityWebRequestLock lock];
        UnityURLRequest* request = (__bridge UnityURLRequest*)*connection;
        if (request == nil)
        {
            [unityWebRequestLock unlock];
            return;
        }

        request.timeoutInterval = timeoutSec;
        request.wantCertificateCallback = wantCertificateCallback;

        if (length > 0)
        {
            bool useStream = (length > 16384);  // if less then 16K, do not use stream (too much memory pressure)
            if (!useStream) // Use data
            {
                unsigned dataSize = length;
                const UInt8* data = (const UInt8*)UnityWebRequestGetUploadData(request.udata, &dataSize);
                if (dataSize < length) // if data size is less than length we should use stream
                    useStream = true;
                else
                {
                    UnityWebRequestConsumeUploadData(request.udata, (unsigned)dataSize);
                    request.HTTPBody = [NSData dataWithBytes: data length: dataSize];
                }
            }
            if (useStream)
                request.HTTPBodyStream = [UnityWebRequestUploadStream createForRequest: request.udata totalBytes: length];
        }
        if (unityWebRequestSession == nil)
        {
            NSURLSessionConfiguration* config = [NSURLSessionConfiguration defaultSessionConfiguration];
            UnityWebRequestDelegate* delegate = [[UnityWebRequestDelegate alloc] init];
            unityWebRequestSession = [NSURLSession sessionWithConfiguration: config delegate: delegate delegateQueue: nil];
        }
        NSURLSessionTask* task = [unityWebRequestSession dataTaskWithRequest: request];
        request.taskIdentifier = task.taskIdentifier;
        [currentRequests addObject: request];
        [unityWebRequestLock unlock];
        [task resume];
    }
}

extern "C" bool UnityWebRequestIsDone(void* const* connection)
{
    @autoreleasepool
    {
        [unityWebRequestLock lock];
        UnityURLRequest* request = (__bridge UnityURLRequest*)*connection;
        bool done = request == nil ? false : request.isDone;
        [unityWebRequestLock unlock];
        return done;
    }
}

extern "C" void UnityDestroyWebRequestBackend(void** connection)
{
    @autoreleasepool
    {
        [unityWebRequestLock lock];
        UnityURLRequest* request = (__bridge_transfer UnityURLRequest*)*connection;
        *connection = NULL;
        if (request != nil)
            [UnityURLRequest removeRequest: request];
        [unityWebRequestLock unlock];
    }
}

extern "C" void UnityCancelWebRequest(void* const* connection)
{
    @autoreleasepool
    {
        [unityWebRequestLock lock];
        UnityURLRequest* request = (__bridge UnityURLRequest*)*connection;
        if (request != nil)
        {
            NSUInteger taskId = request.taskIdentifier;
            [unityWebRequestSession getAllTasksWithCompletionHandler:^(NSArray<NSURLSessionTask*>* _Nonnull tasks) {
                [tasks enumerateObjectsUsingBlock:^(NSURLSessionTask * _Nonnull task, NSUInteger idx, BOOL * _Nonnull stop) {
                    if (task.taskIdentifier == taskId)
                    {
                        [task cancel];
                        *stop = YES;
                    }
                }];
            }];
        }
        [unityWebRequestLock unlock];
    }
}

extern "C" void UnityWebRequestClearCookieCache(const char* domain)
{
    NSArray<NSHTTPCookie*>* cookies;
    NSHTTPCookieStorage* cookieStorage = [NSHTTPCookieStorage sharedHTTPCookieStorage];
    if (domain == NULL)
        cookies = [cookieStorage cookies];
    else
    {
        NSURL* url = [NSURL URLWithString: [NSString stringWithUTF8String: domain]];
        if (url.path == nil || [url.path isEqualToString: [NSString string]])
        {
            NSMutableArray<NSHTTPCookie*>* hostCookies = [[NSMutableArray<NSHTTPCookie *> alloc] init];
            cookies = [cookieStorage cookies];
            NSUInteger cookieCount = [cookies count];
            for (unsigned i = 0; i < cookieCount; ++i)
                if ([cookies[i].domain isEqualToString: url.host])
                    [hostCookies addObject: cookies[i]];
            cookies = hostCookies;
        }
        else
            cookies = [cookieStorage cookiesForURL: url];
    }
    NSUInteger cookieCount = [cookies count];
    for (int i = 0; i < cookieCount; ++i)
        [cookieStorage deleteCookie: cookies[i]];
}

extern "C" void UnityWebRequestCleanupSession()
{
    if (unityWebRequestLock == nil)
        return;
    [unityWebRequestLock lock];
    [unityWebRequestSession invalidateAndCancel];
    [unityWebRequestLock unlock];
}
