#include "Keyboard.h"
#include "DisplayManager.h"
#include "UnityAppController.h"
#include "UnityForwardDecls.h"
#include <string>

#ifndef FILTER_EMOJIS_IOS_KEYBOARD
#define FILTER_EMOJIS_IOS_KEYBOARD 1
#endif


static KeyboardDelegate*    _keyboard = nil;

static bool                 _shouldHideInput = false;
static bool                 _shouldHideInputChanged = false;
static const unsigned       kToolBarHeight = 40;
static const unsigned       kSingleLineFontSize = 20;

extern "C" void UnityKeyboard_StatusChanged(int status);
extern "C" void UnityKeyboard_TextChanged(NSString* text);
extern "C" void UnityKeyboard_LayoutChanged(NSString* layout);

@implementation KeyboardDelegate
{
    // UI handling
    // in case of single line we use UITextField inside UIToolbar
    // in case of multi-line input we use UITextView with UIToolbar as accessory view
    // tvOS does not support multiline input thus only UITextField option is implemented
    // tvOS does not support UIToolbar so we rely on tvOS default processing
#if PLATFORM_IOS || PLATFORM_VISIONOS
    UITextView*     textView;

    UIToolbar*      viewToolbar;
    UIToolbar*      fieldToolbar;

    // toolbar items are kept around to prevent releasing them
    UIBarButtonItem *multiLineDone, *multiLineCancel;
    UIBarButtonItem *singleLineDone, *singleLineCancel, *singleLineInputField;

    NSLayoutConstraint* widthConstraint;
    int singleLineSystemButtonsSpace;
#endif

    UITextField*    textField;

    // inputView is view used for actual input (it will be responder): UITextField [single-line] or UITextView [multi-line]
    // editView is the "root" view for keyboard: UIToolbar [single-line] or UITextView [multi-line]
    UIView*         inputView;
    UIView*         editView;
    KeyboardShowParam cachedKeyboardParam;

    CGRect          _area;
    NSString*       initialText;

    UIKeyboardType  keyboardType;

    BOOL            _multiline;
    BOOL            _inputHidden;
    BOOL            _active;
    KeyboardStatus          _status;
    int             _characterLimit;

    // not pretty but seems like easiest way to keep "we are rotating" status
    BOOL            _rotating;
    NSRange         _hiddenSelection;
    NSRange         _selectionRequest;

    // used for < iOS 14 external keyboard
    CGFloat         _heightOfKeyboard;
}

@synthesize area;
@synthesize active      = _active;
@synthesize status      = _status;
@synthesize text;
@synthesize selection;
@synthesize hasUsedDictation;


- (void)setPendingSelectionRequest
{
    if (_selectionRequest.location != NSNotFound)
    {
        _keyboard.selection = _selectionRequest;
        _selectionRequest.location = NSNotFound;
    }
}

- (BOOL)textFieldShouldReturn:(UITextField*)textFieldObj
{
    [self textInputDone: nil];
    return YES;
}

- (void)textInputDone:(id)sender
{
    if (_status == Visible)
    {
        _status = Done;
        UnityKeyboard_StatusChanged(_status);
    }
    [self hide];
}

- (void)becomeFirstResponder
{
    if (_status == Visible)
    {
        [_keyboard->inputView becomeFirstResponder];
    }
}

- (void)textInputCancel:(id)sender
{
    _status = Canceled;
    UnityKeyboard_StatusChanged(_status);
    [self hide];
}

- (void)textInputLostFocus
{
    if (_status == Visible)
    {
        _status = LostFocus;
        UnityKeyboard_StatusChanged(_status);
    }
    [self hide];
}

- (void)textViewDidChange:(UITextView *)textView
{
    UnityKeyboard_TextChanged(textView.text);
}

- (void)textFieldDidChange:(UITextField*)textField
{
    UnityKeyboard_TextChanged(textField.text);
}

- (BOOL)textViewShouldBeginEditing:(UITextView*)view
{
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    view.inputAccessoryView = viewToolbar;
#endif
    return YES;
}

#if PLATFORM_IOS || PLATFORM_VISIONOS

- (void)textInputModeDidChange:(NSNotification*)notification
{
    [self setPendingSelectionRequest];
    // Apple reports back the primary language of the current keyboard text input mode using BCP 47 language code i.e "en-GB"
    // but this also (undocumented) will return "dictation" when using voice dictation and "emoji" when using the emoji keyboard.
    if ([_keyboard->inputView.textInputMode.primaryLanguage isEqualToString: @"dictation"])
    {
        hasUsedDictation = YES;
    }
}

- (void)keyboardWillShow:(NSNotification *)notification
{
    if (notification.userInfo == nil || inputView == nil)
        return;

    [self setPendingSelectionRequest];
    CGRect srcRect  = [[notification.userInfo objectForKey: UIKeyboardFrameEndUserInfoKey] CGRectValue];
    CGRect rect     = [UnityGetGLView() convertRect: srcRect fromView: nil];

    [self positionInput: rect x: rect.origin.x y: rect.origin.y];
}

- (void)keyboardDidShow:(NSNotification*)notification
{
    _active = YES;
    UnityKeyboard_LayoutChanged(textField.textInputMode.primaryLanguage);

    // We only need to do this in < iOS 14
    // Used in keyboardDidShow as keyboardWillShow might not have the height ready yet as it's not on screen and
    // we're only interested in the height when it's fully on screen.
    if (@available(iOS 14, tvOS 14, *)) {}
    else
    {
        CGRect srcRect  = [[notification.userInfo objectForKey: UIKeyboardFrameEndUserInfoKey] CGRectValue];
        CGRect rect     = [UnityGetGLView() convertRect: srcRect fromView: nil];
        _heightOfKeyboard = rect.size.height;
    }
}

- (void)keyboardWillHide:(NSNotification*)notification
{
    if (_keyboard)
    {
        // Reset selection to avoid selection graphics staying on the screen
        if (_keyboard.selection.length > 0)
        {
            NSRange range = NSMakeRange(_keyboard.text.length, 0);
            _keyboard.selection = range;
        }
    }
    UnityKeyboard_LayoutChanged(nil);
    [self systemHideKeyboard];
}

- (void)keyboardDidHide:(NSNotification*)notification
{
    // The audio engine starts and restarts by listening to AVAudioSessionInterruptionNotifications, However
    // Apple does *not* guarantee that the AVAudioSessionInterruptionTypeEnded will be sent, especially if
    // the app is in the foreground - This can happen when using the dictate function on the keyboard
    // so we send the notification ourselves to ensure the audio restarts.
    if (hasUsedDictation)
    {
        [[NSNotificationCenter defaultCenter] postNotificationName: AVAudioSessionInterruptionNotification
         object: [AVAudioSession sharedInstance]
         userInfo: @{AVAudioSessionInterruptionTypeKey: [NSNumber numberWithUnsignedInteger: AVAudioSessionInterruptionTypeEnded]}];
    }
}

- (void)keyboardDidChangeFrame:(NSNotification*)notification
{
    _active = true;

    CGRect srcRect  = [[notification.userInfo objectForKey: UIKeyboardFrameEndUserInfoKey] CGRectValue];
    CGRect rect     = [UnityGetGLView() convertRect: srcRect fromView: nil];

    // there are several ways to hide keyboard:
    // one, using the hide button on the keyboard, will move it outside view
    // another, for ipad floating keyboard, will "minimize" it (making its height/width zero)

    // if input field is multiline we need to account for the toolbar height
    float expectedHeight = _multiline ? kToolBarHeight : 1e-6;

    if (rect.origin.y + expectedHeight >= [UnityGetGLView() bounds].size.height || rect.size.width < 1e-6)
    {
        [self systemHideKeyboard];
    }
    else
    {
        [self positionInput: rect x: rect.origin.x y: rect.origin.y];
    }
}

- (void)positionInput:(CGRect)kbRect x:(float)x y:(float)y
{
    const float safeAreaInsetLeft = [UnityGetGLView() safeAreaInsets].left;
    const float safeAreaInsetRight = [UnityGetGLView() safeAreaInsets].right;

    if (_multiline)
    {
        // use smaller area for iphones and bigger one for ipads
        int height = UnityDeviceDPI() > 300 ? 75 : 100;

        editView.frame  = CGRectMake(safeAreaInsetLeft, y - height, kbRect.size.width - safeAreaInsetLeft - safeAreaInsetRight, height);
    }
    else
    {
        editView.frame  = CGRectMake(0, y - kToolBarHeight, kbRect.size.width, kToolBarHeight);

        // old constraint must be removed, changing value while constraint is active causes conflict when changing inputView.frame
        [inputView removeConstraint: widthConstraint];

        inputView.frame = CGRectMake(inputView.frame.origin.x,
            inputView.frame.origin.y,
            kbRect.size.width - safeAreaInsetLeft - safeAreaInsetRight - self->singleLineSystemButtonsSpace,
            inputView.frame.size.height);

        // required to avoid auto-resizing on iOS 11 in case if input text is too long
        widthConstraint.constant = inputView.frame.size.width;
        [inputView addConstraint: widthConstraint];
    }

    _area = CGRectMake(x, y, kbRect.size.width, kbRect.size.height);
    [self updateInputHidden];
}

#endif

+ (void)Initialize
{
    NSAssert(_keyboard == nil, @"[KeyboardDelegate Initialize] called after creating keyboard");
    if (!_keyboard)
        _keyboard = [[KeyboardDelegate alloc] init];
}

+ (KeyboardDelegate*)Instance
{
    if (!_keyboard)
        _keyboard = [[KeyboardDelegate alloc] init];

    return _keyboard;
}

+ (void)Destroy
{
    _keyboard = nil;
}

#if PLATFORM_IOS || PLATFORM_VISIONOS
- (UIToolbar*)createToolbarWithItems:(NSArray*)items
{
    UIToolbar* toolbar = [[UIToolbar alloc] initWithFrame: CGRectMake(0, 840, 320, kToolBarHeight)];
    UnitySetViewTouchProcessing(toolbar, touchesIgnored);
    toolbar.hidden = NO;
    toolbar.items = items;
    return toolbar;
}

- (void)createToolbars
{
    multiLineDone   = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemDone target: self action: @selector(textInputDone:)];
    multiLineCancel = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemCancel target: self action: @selector(textInputCancel:)];
    viewToolbar     = [self createToolbarWithItems: @[multiLineDone, multiLineCancel]];

    singleLineInputField = [[UIBarButtonItem alloc] initWithCustomView: textField];
    singleLineDone       = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemDone target: self action: @selector(textInputDone:)];
    singleLineCancel     = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemCancel target: self action: @selector(textInputCancel:)];
    fieldToolbar         = [self createToolbarWithItems: @[singleLineInputField, singleLineDone, singleLineCancel]];

    // Gather round boys, let's hear the story of apple ingenious api.
    // Did you see UIBarButtonItem above? oh the marvel of design
    // Maybe you thought it will have some connection to UIView or something?
    //   Yes, internally, in private members, hidden like dirty laundry in a room of a youngster
    // But, you may ask, why do we care? Oh, easy - sometimes you want to use non-english language
    // And in these languages, not good enough to be english, done/cancel items can have different sizes
    // And we insist on having input field size set because, yes, we cannot quite do a layout inside UIToolbar
    //   [because there are no views we can actually touch, thanks for asking]
    // Obviously, localizing system strings is also well hidden, and what works now might stop working tomorrow
    // That's why we keep UIBarButtonSystemItemDone/UIBarButtonSystemItemCancel above
    //   and try to translate "Done"/"Cancel" in a way that "should" work
    //   if localization fails we will still have "some" values (coming from english)
    //   and while this wont work with, say, asian languages - it should not regress the current behavior
    UIFont* font = [UIFont systemFontOfSize: kSingleLineFontSize];
    NSBundle* uikitBundle = [NSBundle bundleForClass: UIApplication.class];
    NSString* doneStr   = [uikitBundle localizedStringForKey: @"Done" value: nil table: nil];
    NSString* cancelStr = [uikitBundle localizedStringForKey: @"Cancel" value: nil table: nil];

    // mind you, all of that is highly empirical.
    // we assume space between items to be 18 [both between buttons and on the sides]
    // we also assume that button width would be more or less the title width exactly (it should be quite close though)
    const int doneW   = (int)[doneStr sizeWithAttributes: @{NSFontAttributeName: font}].width;
    const int cancelW = (int)[cancelStr sizeWithAttributes: @{NSFontAttributeName: font}].width;

    singleLineSystemButtonsSpace = doneW + cancelW + 3 * 18;
}

#endif

- (id)init
{
    NSAssert(_keyboard == nil, @"You can have only one instance of KeyboardDelegate");
    self = [super init];
    if (self)
    {
#if PLATFORM_IOS || PLATFORM_VISIONOS
        textView = [[UITextView alloc] initWithFrame: CGRectMake(0, 840, 480, 30)];
        textView.delegate = self;
        textView.font = [UIFont systemFontOfSize: 18.0];
        textView.hidden = YES;
        // For some unknown reason, the `textView` has visual issues when
        // using Dark Mode (some parts of the view become transparent). See case 1367091.
        // However, setting alpha to a value different than 1 fixes the issue.
        textView.alpha = 0.99;
#endif

        textField = [[UITextField alloc] initWithFrame: CGRectMake(0, 0, 120, 30)];
        textField.delegate = self;
        textField.borderStyle = UITextBorderStyleRoundedRect;
        textField.font = [UIFont systemFontOfSize: kSingleLineFontSize];
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;

#if PLATFORM_IOS || PLATFORM_VISIONOS
        widthConstraint = [NSLayoutConstraint constraintWithItem: textField attribute: NSLayoutAttributeWidth relatedBy: NSLayoutRelationEqual toItem: nil attribute: NSLayoutAttributeNotAnAttribute multiplier: 1.0 constant: textField.frame.size.width];
        [textField addConstraint: widthConstraint];
#endif
        [textField addTarget: self action: @selector(textFieldDidChange:) forControlEvents: UIControlEventEditingChanged];

#if PLATFORM_IOS || PLATFORM_VISIONOS
        [self createToolbars];
#endif

#if PLATFORM_IOS || PLATFORM_VISIONOS
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(keyboardWillShow:) name: UIKeyboardWillShowNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(keyboardDidShow:) name: UIKeyboardDidShowNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(keyboardWillHide:) name: UIKeyboardWillHideNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(keyboardDidHide:) name: UIKeyboardDidHideNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(keyboardDidChangeFrame:) name: UIKeyboardDidChangeFrameNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(textInputModeDidChange:) name: UITextInputCurrentInputModeDidChangeNotification object: nil];
#endif

        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(textInputDone:) name: UITextFieldTextDidEndEditingNotification object: nil];
        [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(textInputDone:) name: UITextViewTextDidEndEditingNotification object: nil];
    }

    return self;
}

- (void)setTextInputTraits:(id<UITextInputTraits>)traits
    withParam:(KeyboardShowParam)param
{
    UITextAutocapitalizationType capitalization = [KeyboardDelegate capitalizationForKeyboardParam: param];

    if (!_inputHidden)
        traits.secureTextEntry = param.secure;
    if (param.secure)
    {
        traits.autocorrectionType = UITextAutocorrectionTypeNo;
        traits.spellCheckingType  = UITextSpellCheckingTypeNo;
        traits.autocapitalizationType = UITextAutocapitalizationTypeNone;
    }
    else
    {
        traits.autocorrectionType = param.autocorrectionType;
        traits.spellCheckingType  = param.spellcheckingType;
        traits.autocapitalizationType = capitalization;
    }
    traits.keyboardType = param.keyboardType;
    traits.keyboardAppearance = param.appearance;
}

+ (UITextAutocapitalizationType)capitalizationForKeyboardParam:(KeyboardShowParam)param
{
    if (param.secure)
        return UITextAutocapitalizationTypeNone;

    UITextAutocapitalizationType capitalization;
    switch (param.keyboardType)
    {
        case UIKeyboardTypeURL:
        case UIKeyboardTypeEmailAddress:
        case UIKeyboardTypeWebSearch:
            capitalization = UITextAutocapitalizationTypeNone;
            break;
        default:
            capitalization = UITextAutocapitalizationTypeSentences;
    }

    return capitalization;
}

- (void)setKeyboardParams:(KeyboardShowParam)param
{
    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    if (cachedKeyboardParam.multiline != param.multiline ||
        cachedKeyboardParam.secure != param.secure ||
        cachedKeyboardParam.keyboardType != param.keyboardType ||
        cachedKeyboardParam.autocorrectionType != param.autocorrectionType ||
        cachedKeyboardParam.appearance != param.appearance)
    {
        [self hideUIDelayed];
    }

    cachedKeyboardParam = param;

    if (_active)
        [self hide];

    initialText = param.text ? [[NSString alloc] initWithUTF8String: param.text] : @"";

    _characterLimit = param.characterLimit;

#if PLATFORM_IOS || PLATFORM_VISIONOS
    _multiline = param.multiline;
    if (_multiline)
    {
        [self setTextInputTraits: textView withParam: param];
    }
    else
    {
        if (param.oneTimeCode)
            textField.textContentType = UITextContentTypeOneTimeCode;

        [self setTextInputTraits: textField withParam: param];
        textField.placeholder = [NSString stringWithUTF8String: param.placeholder];
    }

    inputView = _multiline ? textView : textField;
    editView = _multiline ? textView : fieldToolbar;

    // Initially hide input fields in case external keyboard is connected.
    // This is needed for certain cases where external keyboard is connected
    // and soft keyboard is reopened without closing it first.
    // If external keyboard does not exist, these values will be updated by keyboardWillShow
    editView.hidden = YES;
    viewToolbar.hidden = YES;
    inputView.hidden = YES;

#else // PLATFORM_TVOS
    [self setTextInputTraits: textField withParam: param];
    textField.placeholder = [NSString stringWithUTF8String: param.placeholder];
    inputView = textField;
    editView = textField;
#endif

    [self shouldHideInput: _shouldHideInput];

    [KeyboardDelegate Instance].text = initialText;

    _status     = Visible;
    UnityKeyboard_StatusChanged(_status);
    _active     = YES;
    _selectionRequest.location = NSNotFound;
}

// we need to show/hide keyboard to react to orientation too, so extract we extract UI fiddling

- (void)showUI
{
    // if we unhide everything now the input will be shown smaller then needed quickly (and resized later)
    // so unhide only when keyboard is actually shown (we will update it when reacting to ios notifications)

    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    if (!inputView.isFirstResponder)
    {
        editView.hidden = YES;

        [UnityGetGLView() addSubview: editView];
        [inputView becomeFirstResponder];

#if PLATFORM_TVOS
        // make keyboard usable via controller by allowing exit to home temporarily
        // val 3, as second lowest bit indicates a temporary disable
        if (UnityGetAppleTVRemoteAllowExitToMenu() == 0)
            UnitySetAppleTVRemoteAllowExitToMenu(3);
#endif
    }

    // we need to reload input views when switching the keyboard type for already active keyboard
    // otherwise the changed traits may not be immediately applied
    [inputView reloadInputViews];
}

- (void)hideUI
{
    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    [self performSelector: @selector(hideUIDelayed) withObject: nil afterDelay: 0.05]; // to avoid unnecessary hiding
}

- (void)hideUIDelayed
{
    [inputView resignFirstResponder];

    [editView removeFromSuperview];
    editView.hidden = YES;

    // Keyboard notifications are not supported on tvOS so keyboardWillHide: will never be called which would set _active to false.
    // To work around that limitation we will update _active from here.
    #if PLATFORM_TVOS
    BOOL wasActive = _active;
    _active = editView.isFirstResponder;
    // if closing, restore exit value to what it was (getter ignores temp value and returns what it is meant to be)
    if (!_active && wasActive)
        UnitySetAppleTVRemoteAllowExitToMenu(UnityGetAppleTVRemoteAllowExitToMenu());
    #endif
}

- (void)systemHideKeyboard
{
    // when we are rotating os will bombard us with keyboardWillHide: and keyboardDidChangeFrame:
    // ignore all of them (we do it here only to simplify code: we call systemHideKeyboard only from these notification handlers)
    if (_rotating)
        return;

    _active = editView.isFirstResponder;
    editView.hidden = YES;

    #if PLATFORM_IOS || PLATFORM_VISIONOS
    viewToolbar.hidden = YES;
    #endif

    _area = CGRectMake(0, 0, 0, 0);
}

- (void)show
{
    [self showUI];
}

- (void)hide
{
    [self hideUI];
}

- (void)updateInputHidden
{
    if (_shouldHideInputChanged)
    {
        [self shouldHideInput: _shouldHideInput];
        _shouldHideInputChanged = false;
    }

    textField.returnKeyType = _inputHidden ? UIReturnKeyDone : UIReturnKeyDefault;

    #if PLATFORM_IOS || PLATFORM_VISIONOS

    UIView* unityView = UnityGetGLView();
    NSMutableArray<UIAccessibilityElement*>* elements = unityView.accessibilityElements ? [unityView.accessibilityElements mutableCopy] : [NSMutableArray array];

    viewToolbar.hidden  = !_multiline || _inputHidden ? YES : NO;

    [elements removeObject: (UIAccessibilityElement*)viewToolbar];

    if (!viewToolbar.hidden)
    {
        [elements addObject: (UIAccessibilityElement*)viewToolbar];
    }

    [elements removeObject: (UIAccessibilityElement*)fieldToolbar];

    editView.hidden     = _inputHidden ? YES : NO;

    if (!_multiline && !editView.hidden)
    {
        [elements addObject: (UIAccessibilityElement*)fieldToolbar];
    }

    unityView.accessibilityElements = elements;

    #else

    editView.hidden     = _inputHidden ? YES : NO;

    #endif

    inputView.hidden    = _inputHidden ? YES : NO;
    [self setTextInputTraits: textField withParam: cachedKeyboardParam];
}

- (CGRect)queryArea
{
    return editView.hidden ? _area : CGRectUnion(_area, editView.frame);
}

- (NSRange)querySelection
{
    UIView<UITextInput>* textInput;

#if PLATFORM_TVOS
    textInput = textField;
#else
    textInput = _multiline ? textView : textField;
#endif

    UITextPosition* beginning = textInput.beginningOfDocument;

    UITextRange* selectedRange = textInput.selectedTextRange;
    UITextPosition* selectionStart = selectedRange.start;
    UITextPosition* selectionEnd = selectedRange.end;

    const NSInteger location = [textInput offsetFromPosition: beginning toPosition: selectionStart];
    const NSInteger length = [textInput offsetFromPosition: selectionStart toPosition: selectionEnd];

    return NSMakeRange(location, length);
}

- (void)assignSelection:(NSRange)range
{
    UIView<UITextInput>* textInput;

#if PLATFORM_TVOS
    textInput = textField;
#else
    textInput = _multiline ? textView : textField;
#endif

    UITextPosition* begin = [textInput beginningOfDocument];
    UITextPosition* caret = [textInput positionFromPosition: begin offset: range.location];
    UITextPosition* select = [textInput positionFromPosition: caret offset: range.length];
    UITextRange* textRange = [textInput textRangeFromPosition: caret toPosition: select];

    [textInput setSelectedTextRange: textRange];
    if (_inputHidden)
        _hiddenSelection = range;
    _selectionRequest = range;
}

+ (void)StartReorientation
{
    if (_keyboard && _keyboard.active)
        _keyboard->_rotating = YES;
}

+ (void)FinishReorientation
{
    if (_keyboard)
        _keyboard->_rotating = NO;
}

- (NSString*)getText
{
    if (_status == Canceled)
        return initialText;
    else
    {
#if PLATFORM_TVOS
        return [textField text];
#else
        return _multiline ? [textView text] : [textField text];
#endif
    }
}

- (void)setText:(NSString*)newText
{
#if PLATFORM_IOS || PLATFORM_VISIONOS
    if (_multiline)
        textView.text = newText;
    else
        textField.text = newText;
#else
    textField.text = newText;
#endif

    // for hidden selection place cursor at the end when text changes
    _hiddenSelection.location = newText.length;
    _hiddenSelection.length = 0;
}

- (void)shouldHideInput:(BOOL)hide
{
    if (hide)
    {
        switch (keyboardType)
        {
            case UIKeyboardTypeDefault:                 hide = YES; break;
            case UIKeyboardTypeASCIICapable:            hide = YES; break;
            case UIKeyboardTypeNumbersAndPunctuation:   hide = YES; break;
            case UIKeyboardTypeURL:                     hide = YES; break;
            case UIKeyboardTypeNumberPad:               hide = NO;  break;
            case UIKeyboardTypePhonePad:                hide = NO;  break;
            case UIKeyboardTypeNamePhonePad:            hide = NO;  break;
            case UIKeyboardTypeEmailAddress:            hide = YES; break;
            case UIKeyboardTypeTwitter:                 hide = YES; break;
            case UIKeyboardTypeWebSearch:               hide = YES; break;
            case UIKeyboardTypeDecimalPad:              hide = NO; break;
            default:                                    hide = NO;  break;
        }
    }

    _inputHidden = hide;
}

- (BOOL)hasExternalKeyboard
{
    // iOS 14 and above has a public API in the GameController framework. If this is missing then this will return false
    if (@available(iOS 14, tvOS 14, *))
        return [NSClassFromString(@"GCKeyboard") valueForKey: @"coalescedKeyboard"] != nil;
    else // The minimum height a software keyboard will be on iOS is 160, A bluetooth keyboard just uses a toolbar which will be smaller than this.
        return _heightOfKeyboard < 160.0f;
}

- (UITextField*)getTextField
{
    return textField;
}

static bool StringContainsEmoji(NSString *string);
- (BOOL)textField:(UITextField*)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString*)string_
{
    BOOL stringContainsEmoji = NO;

#if FILTER_EMOJIS_IOS_KEYBOARD
    stringContainsEmoji = StringContainsEmoji(string_);
#endif

    if (range.length + range.location > textField.text.length)
        return NO;

    return [self currentText: textField.text shouldChangeInRange: range replacementText: string_] && !stringContainsEmoji;
}

- (BOOL)textView:(UITextView*)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString*)text_
{
    BOOL stringContainsEmoji = NO;

#if FILTER_EMOJIS_IOS_KEYBOARD
    stringContainsEmoji = StringContainsEmoji(text_);
#endif

    if (range.length + range.location > textView.text.length)
        return NO;

    return [self currentText: textView.text shouldChangeInRange: range replacementText: text_] && !stringContainsEmoji;
}

- (BOOL)currentText:(NSString*)currentText shouldChangeInRange:(NSRange)range  replacementText:(NSString*)text_
{
    NSUInteger newLength = currentText.length + (text_.length - range.length);

    if (newLength > _characterLimit && _characterLimit != 0 && newLength >= currentText.length)
    {
        // If the user inserts any emoji that exceeds the character limit it should quickly reject it, else it'll crash. We need to check regardless of FILTER_EMOJIS_IOS_KEYBOARD status as sometimes this method gets called before we've filtered out an emoji.
        if (StringContainsEmoji(text_))
            return NO;

        NSString* newReplacementText = @"";
        if ((currentText.length - range.length) < _characterLimit)
            newReplacementText = [text_ substringWithRange: NSMakeRange(0, _characterLimit - (currentText.length - range.length))];

        NSString* newText = [currentText stringByReplacingCharactersInRange: range withString: newReplacementText];

#if PLATFORM_IOS || PLATFORM_VISIONOS
        if (_multiline)
            [textView setText: newText];
        else
            [textField setText: newText];
#else
        [textField setText: newText];
#endif

        // If we're trying to exceed the max length of the field BUT the text can merge into
        // precomposed characters then we should allow the input.
        NSString* precomposedNewText = [currentText precomposedStringWithCompatibilityMapping];
        __block int count = 0;
        [precomposedNewText enumerateSubstringsInRange: NSMakeRange(0, [precomposedNewText length]) options: NSStringEnumerationByComposedCharacterSequences
         usingBlock: ^(NSString *inSubstring, NSRange inSubstringRange, NSRange inEnclosingRange, BOOL *outStop) {
             count++;
         }];
        // count of characters of precomposed string will equal the character limit
        // if there has been characters merged bringing us under the limit.
        return count <= _characterLimit;
    }
    else
    {
        if (_inputHidden && _hiddenSelection.length > 0)
        {
            NSString* newText = [currentText stringByReplacingCharactersInRange: _hiddenSelection withString: text_];
#if PLATFORM_IOS || PLATFORM_VISIONOS
            if (_multiline)
                [textView setText: newText];
            else
                [textField setText: newText];
#else
            [textField setText: newText];
#endif
            _hiddenSelection.location = _hiddenSelection.location + text_.length;
            _hiddenSelection.length = 0;
            self.selection = _hiddenSelection;
            return NO;
        }

        _hiddenSelection.location = range.location + text_.length;
        _hiddenSelection.length = 0;
        return YES;
    }
}

@end

//==============================================================================
//
//  Unity Interface:

extern "C" void UnityKeyboard_Create(unsigned keyboardType, int autocorrection, int multiline, int secure, int alert, const char* text, const char* placeholder, int characterLimit)
{
#if PLATFORM_TVOS
    // Not supported. The API for showing keyboard for editing multi-line text is not available on tvOS
    multiline = false;
#endif

    static const UIKeyboardType keyboardTypes[] =
    {
        UIKeyboardTypeDefault,
        UIKeyboardTypeASCIICapable,
        UIKeyboardTypeNumbersAndPunctuation,
        UIKeyboardTypeURL,
        UIKeyboardTypeNumberPad,
        UIKeyboardTypePhonePad,
        UIKeyboardTypeNamePhonePad,
        UIKeyboardTypeEmailAddress,
        UIKeyboardTypeDefault, // Default is used in case Wii U specific NintendoNetworkAccount type is selected (indexed at 8 in UnityEngine.TouchScreenKeyboardType)
        UIKeyboardTypeTwitter,
        UIKeyboardTypeWebSearch,
        UIKeyboardTypeDecimalPad
    };

    // on iOS 15, QuickType bar was decoupled from autocorrection (so it still shows candidates)
    // for a principle of "the least surprise" we keep it coupled internally, so autocorrection == spellchecking
    // TODO: should we expose the control of it?
    static const UITextAutocorrectionType autocorrectionTypes[] =
    {
        UITextAutocorrectionTypeNo,
        UITextAutocorrectionTypeDefault,
    };

    static const UITextSpellCheckingType spellcheckingTypes[] =
    {
        UITextSpellCheckingTypeNo,
        UITextSpellCheckingTypeDefault,
    };

    static const UIKeyboardAppearance keyboardAppearances[] =
    {
        UIKeyboardAppearanceDefault,
        UIKeyboardAppearanceAlert,
    };

    // Note: TouchScreenKeyboard with value 12 is OneTimeCode and does not directly translate to a UIKeyboardType.
    // We show a number pad but change the content type so that codes can be autofilled when received in Messages.
    KeyboardShowParam param =
    {
        text, placeholder,
        keyboardTypes[keyboardType == 12 ? UIKeyboardTypeNumberPad : keyboardType],
        autocorrectionTypes[autocorrection],
        spellcheckingTypes[autocorrection],
        keyboardAppearances[alert],
        (BOOL)multiline, (BOOL)secure,
        characterLimit,
        keyboardType == 12
    };

    [[KeyboardDelegate Instance] setKeyboardParams: param];
}

extern "C" void UnityKeyboard_Show()
{
    // do not send hide if didnt create keyboard
    // TODO: probably assert?
    if (!_keyboard)
        return;

    [[KeyboardDelegate Instance] show];
}

extern "C" void UnityKeyboard_Hide()
{
    // do not send hide if didnt create keyboard
    // TODO: probably assert?
    if (!_keyboard)
        return;

    [[KeyboardDelegate Instance] textInputLostFocus];
}

extern "C" void UnityKeyboard_SetText(const char* text)
{
    [KeyboardDelegate Instance].text = [NSString stringWithUTF8String: text];
}

extern "C" NSString* UnityKeyboard_GetText()
{
    return [KeyboardDelegate Instance].text;
}

extern "C" int UnityKeyboard_IsActive()
{
    return (_keyboard && _keyboard.active) ? 1 : 0;
}

extern "C" int UnityKeyboard_Status()
{
    return _keyboard ? _keyboard.status : Canceled;
}

extern "C" void UnityKeyboard_SetInputHidden(int hidden)
{
    _shouldHideInput        = hidden;
    _shouldHideInputChanged = true;

    // update hidden status only if keyboard is on screen to avoid showing input view out of nowhere
    if (_keyboard && _keyboard.active)
        [_keyboard updateInputHidden];
}

extern "C" int UnityKeyboard_IsInputHidden()
{
    return _shouldHideInput ? 1 : 0;
}

extern "C" void UnityKeyboard_GetRect(float* x, float* y, float* w, float* h)
{
    CGRect area = _keyboard ? _keyboard.area : CGRectMake(0, 0, 0, 0);

    // convert to unity coord system

    float   multX   = (float)GetMainDisplaySurface()->targetW / UnityGetGLView().bounds.size.width;
    float   multY   = (float)GetMainDisplaySurface()->targetH / UnityGetGLView().bounds.size.height;

    *x = 0;
    *y = area.origin.y * multY;
    *w = area.size.width * multX;
    *h = area.size.height * multY;
}

extern "C" void UnityKeyboard_SetCharacterLimit(unsigned characterLimit)
{
    [KeyboardDelegate Instance].characterLimit = characterLimit;
}

extern "C" int UnityKeyboard_CanGetSelection()
{
    return (_keyboard) ? 1 : 0;
}

extern "C" void UnityKeyboard_GetSelection(int* location, int* length)
{
    if (_keyboard)
    {
        NSRange selection = _keyboard.selection;

        *location = (int)selection.location;
        *length = (int)selection.length;
    }
    else
    {
        *location = 0;
        *length = 0;
    }
}

extern "C" int UnityKeyboard_CanSetSelection()
{
    return (_keyboard) ? 1 : 0;
}

extern "C" void UnityKeyboard_SetSelection(int location, int length)
{
    if (_keyboard)
    {
        _keyboard.selection = NSMakeRange(location, length);
    }
}

//==============================================================================
//
//  Emoji Filtering: unicode magic

static bool StringContainsEmoji(NSString *string)
{
    __block BOOL returnValue = NO;

    [string enumerateSubstringsInRange: NSMakeRange(0, string.length)
 options: NSStringEnumerationByComposedCharacterSequences
 usingBlock:^(NSString* substring, NSRange substringRange, NSRange enclosingRange, BOOL* stop)
    {
        const unichar hs = [substring characterAtIndex: 0];
        const unichar ls = substring.length > 1 ? [substring characterAtIndex: 1] : 0;

            #define IS_IN(val, min, max) (((val) >= (min)) && ((val) <= (max)))

        if (IS_IN(hs, 0xD800, 0xDBFF))
        {
            if (substring.length > 1)
            {
                const int uc = ((hs - 0xD800) * 0x400) + (ls - 0xDC00) + 0x10000;

                // Musical: [U+1D000, U+1D24F]
                // Enclosed Alphanumeric Supplement: [U+1F100, U+1F1FF]
                // Enclosed Ideographic Supplement: [U+1F200, U+1F2FF]
                // Miscellaneous Symbols and Pictographs: [U+1F300, U+1F5FF]
                // Supplemental Symbols and Pictographs: [U+1F900, U+1F9FF]
                // Emoticons: [U+1F600, U+1F64F]
                // Transport and Map Symbols: [U+1F680, U+1F6FF]
                if (IS_IN(uc, 0x1D000, 0x1F9FF))
                    returnValue = YES;
            }
        }
        else if (substring.length > 1 && ls == 0x20E3)
        {
            // emojis for numbers: number + modifier ls = U+20E3
            returnValue = YES;
        }
        else
        {
            if (        // Latin-1 Supplement
                hs == 0x00A9 || hs == 0x00AE
                // General Punctuation
                ||  hs == 0x203C || hs == 0x2049
                // Letterlike Symbols
                ||  hs == 0x2122 || hs == 0x2139
                // Arrows
                ||  IS_IN(hs, 0x2194, 0x2199) || IS_IN(hs, 0x21A9, 0x21AA)
                // Miscellaneous Technical
                ||  IS_IN(hs, 0x231A, 0x231B) || IS_IN(hs, 0x23E9, 0x23F3) || IS_IN(hs, 0x23F8, 0x23FA) || hs == 0x2328 || hs == 0x23CF
                // Geometric Shapes
                ||  IS_IN(hs, 0x25AA, 0x25AB) || IS_IN(hs, 0x25FB, 0x25FE) || hs == 0x25B6 || hs == 0x25C0
                // Miscellaneous Symbols
                ||  IS_IN(hs, 0x2600, 0x2604) || IS_IN(hs, 0x2614, 0x2615) || IS_IN(hs, 0x2622, 0x2623) || IS_IN(hs, 0x262E, 0x262F)
                ||  IS_IN(hs, 0x2638, 0x263A) || IS_IN(hs, 0x2648, 0x2653) || IS_IN(hs, 0x2665, 0x2666) || IS_IN(hs, 0x2692, 0x2694)
                ||  IS_IN(hs, 0x2696, 0x2697) || IS_IN(hs, 0x269B, 0x269C) || IS_IN(hs, 0x26A0, 0x26A1) || IS_IN(hs, 0x26AA, 0x26AB)
                ||  IS_IN(hs, 0x26B0, 0x26B1) || IS_IN(hs, 0x26BD, 0x26BE) || IS_IN(hs, 0x26C4, 0x26C5) || IS_IN(hs, 0x26CE, 0x26CF)
                ||  IS_IN(hs, 0x26D3, 0x26D4) || IS_IN(hs, 0x26D3, 0x26D4) || IS_IN(hs, 0x26E9, 0x26EA) || IS_IN(hs, 0x26F0, 0x26F5)
                ||  IS_IN(hs, 0x26F7, 0x26FA)
                ||  hs == 0x260E || hs == 0x2611 || hs == 0x2618 || hs == 0x261D || hs == 0x2620 || hs == 0x2626 || hs == 0x262A
                ||  hs == 0x2660 || hs == 0x2663 || hs == 0x2668 || hs == 0x267B || hs == 0x267F || hs == 0x2699 || hs == 0x26C8
                ||  hs == 0x26D1 || hs == 0x26FD
                // Dingbats
                ||  IS_IN(hs, 0x2708, 0x270D) || IS_IN(hs, 0x2733, 0x2734) || IS_IN(hs, 0x2753, 0x2755)
                ||  IS_IN(hs, 0x2763, 0x2764) || IS_IN(hs, 0x2795, 0x2797)
                ||  hs == 0x2702 || hs == 0x2705 || hs == 0x270F || hs == 0x2712 || hs == 0x2714 || hs == 0x2716 || hs == 0x271D
                ||  hs == 0x2721 || hs == 0x2728 || hs == 0x2744 || hs == 0x2747 || hs == 0x274C || hs == 0x274E || hs == 0x2757
                ||  hs == 0x27A1 || hs == 0x27B0 || hs == 0x27BF
                // CJK Symbols and Punctuation
                ||  hs == 0x3030 || hs == 0x303D
                // Enclosed CJK Letters and Months
                ||  hs == 0x3297 || hs == 0x3299
                // Supplemental Arrows-B
                ||  IS_IN(hs, 0x2934, 0x2935)
                // Miscellaneous Symbols and Arrows
                ||  IS_IN(hs, 0x2B05, 0x2B07) || IS_IN(hs, 0x2B1B, 0x2B1C) || hs == 0x2B50 || hs == 0x2B55
            )
            {
                returnValue = YES;
            }
        }

            #undef IS_IN
    }];

    return returnValue;
}
