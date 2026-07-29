import SwiftUI
import ComposeApp

func registerSwiftUIInspektifyExtensions() {
    let extensionItem = UIKitInspektifyExtensionKt.uiKitInspektifyExtension(
        id: "swiftui-design-system",
        title: "SwiftUI Design System",
        icon: nil,
        order: 2,
        controller: {
            UIHostingController(rootView: DesignSystemView())
        }
    )
    InspektifyExtensions.shared.register(extension: extensionItem)
}

struct DesignSystemView: View {
    var body: some View {
        ScrollView {
            VStack(alignment: .leading, spacing: 16) {
                Text("SwiftUI Design System")
                    .font(.largeTitle.bold())

                Text("Rendered by SwiftUI, embedded inside Inspektify via UIHostingController + UIKitViewController.")
                    .font(.body)
                    .foregroundColor(.secondary)

                Divider()

                Text("Buttons").font(.headline)
                HStack(spacing: 12) {
                    Button("Primary") {}.buttonStyle(.borderedProminent)
                    Button("Secondary") {}.buttonStyle(.bordered)
                    Button("Text") {}
                }

                Divider()

                Text("Palette").font(.headline)
                HStack(spacing: 12) {
                    ColorSwatch(color: .blue, name: "Primary")
                    ColorSwatch(color: .green, name: "Success")
                    ColorSwatch(color: .orange, name: "Warning")
                    ColorSwatch(color: .red, name: "Error")
                }

                Divider()

                Text("Typography").font(.headline)
                Text("Title").font(.title)
                Text("Headline").font(.headline)
                Text("Body").font(.body)
                Text("Caption").font(.caption)
            }
            .padding()
        }
    }
}

private struct ColorSwatch: View {
    let color: Color
    let name: String

    var body: some View {
        VStack(spacing: 6) {
            RoundedRectangle(cornerRadius: 8)
                .fill(color)
                .frame(width: 48, height: 48)
            Text(name).font(.caption)
        }
    }
}
