import SwiftUI
import ComposeApp

@main
struct iOSApp: App {

    init() {
        KoinImplKt.doInitKoin()
	}

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
