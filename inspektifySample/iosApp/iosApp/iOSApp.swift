import SwiftUI
import ComposeApp

@main
struct iOSApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    init() {
        ComposeAppComposeAppKoinImplKt.doInitKoin()
	}

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
