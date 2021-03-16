// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "tiff-ios",
    platforms: [.macOS(.v10_10), .iOS(.v12), .tvOS(.v9)],
    products: [
        .library(
            name: "tiff-ios",
            targets: ["tiff-ios"]),
    ],
    targets: [
        .target(
            name: "tiff-ios",
            path: "tiff-ios",
            exclude: ["Info.plist", "tiff-ios-Bridging-Header.h", "tiff-ios-Prefix.pch"],
            publicHeadersPath: "",
            cSettings: [
                .headerSearchPath("io"),
                .headerSearchPath("util"),
                .headerSearchPath("compression"),
            ]),
        .testTarget(
            name: "tiff-iosTests",
            dependencies: ["tiff-ios"],
            path: "tiff-iosTests",
            exclude: ["Info.plist", "README", "tiff-iosTests-Bridging-Header.h", "TIFFSwiftReadmeTest.swift"],
            resources: ["deflate.tiff", "float32.tiff", "float64.tiff", "initial.tiff", "int32.tiff", "interleave.tiff", "lzw.tiff", "overviews.tiff", "packbits.tiff", "quad-jpeg.tif", "rgb.tiff", "small.tiff", "stripped.tiff", "tiled.tiff", "tiledplanar.tiff", "uint32.tiff"].map(Resource.copy),
            cSettings: [
                .headerSearchPath("../tiff-ios/io"),
                .headerSearchPath("../tiff-ios/util"),
                .headerSearchPath("../tiff-ios/compression"),
            ]),
    ]
)