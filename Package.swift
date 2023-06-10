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
        .package(url: "https://github.com/beMappy/TweetNacl", branch: "SPM"),
        .package(url: "https://github.com/beMappy/NWWebSocket", branch: "SPM"),
        /*
        .package(url: "https://github.com/beMappy/TweetNacl", exact: "1.0.2-xc14.2-2"),
        .package(url: "https://github.com/beMappy/NWWebSocket", exact: "0.5.2-xc14.2-"),
        */
    ],
    targets: [
        .target(
            name: "PusherSwiftWrapper",
            dependencies: [
                .target(name: "PusherSwift")
            ]
        ),
        .binaryTarget(
            name: "PusherSwift",
            path: "./PusherSwift.xcframework"
        ),
    ]
)
