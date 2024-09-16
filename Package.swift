// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ShakeDetektorIOS",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "ShakeDetektorIOS",
            targets: ["ShakeDetektorIOS"]
        ),
    ],
    targets: [
        .target(
            name: "ShakeDetektorIOS",
            dependencies: [],
            path: "ShakeDetektorIOS"
        )
    ]
)