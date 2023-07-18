load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "lib1",
    srcs = ["lib1.cpp"],
    hdrs = ["lib1.h"],
)

cc_binary(
    name = "build2",
    srcs = ["main.cpp"],
    deps = [":lib1",],
)
