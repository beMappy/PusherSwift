// swift-tools-version: 5.7

import PackageDescription

let package = Package(
    name: "PusherSwift",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "PusherSwift",
            targets: ["PusherSwiftWrapper"]),
    ],
    dependencies: [
        .package(url: "https://github.com/beMappy/TweetNacl", exact: "1.0.2-SPM"),
        .package(url: "https://github.com/beMappy/NWWebSocket", exact: "0.5.2-SPM"),
    ],
    targets: [
        .target(
            name: "PusherSwiftWrapper",
            dependencies: [
                .target(name: "PusherSwift"),
                .product(name: "TweetNacl", package: "TweetNacl"),
                .product(name: "NWWebSocket", package: "NWWebSocket"),
            ]
        ),
        .binaryTarget(
            name: "PusherSwift",
            path: "./PusherSwift.xcframework"
        ),
    ]
)
