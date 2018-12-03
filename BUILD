package(default_visibility = ["//visibility:public"])

cc_library(
    name = "taopq",
    srcs = glob([
        "src/lib/**/*.cpp"
    ]),
    hdrs = glob([
        "include/**/*.hpp",
    ]),
    strip_include_prefix =
        "include",
    deps = [
        "@system//:libpq"
    ],
)
