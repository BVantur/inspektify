import SwiftUI
import ComposeApp

@main
struct iOSApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    init() {
        KoinImplKt.doInitKoin()
        registerSwiftUIInspektifyExtensions()
	}

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
