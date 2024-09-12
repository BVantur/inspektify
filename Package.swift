// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ShakeDetektorIOS",
    platforms: [.iOS(.v13), .macOS(.v10_15), .tvOS(.v13), .watchOS(.v6)],
    products: [
        .library(
            name: "ShakeDetektorIOS",
            targets: ["ShakeDetektorIOS"]
        )
    ],
    targets: [
        .target(
            name: "ShakeDetektorIOS",
            dependencies: [.target(name: "ShakeDetektorIOS")],
            path: "ShakeDetektorIOS"
        )
    ],
    swiftLanguageVersions: [.v5]
)
