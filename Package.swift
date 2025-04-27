// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMethodB",
    products: [
        .library(name: "TreeSitterMethodB", targets: ["TreeSitterMethodB"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMethodB",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMethodBTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMethodB",
            ],
            path: "bindings/swift/TreeSitterMethodBTests"
        )
    ],
    cLanguageStandard: .c11
)
