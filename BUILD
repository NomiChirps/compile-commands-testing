load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

cc_library(
    name = "foo",
    srcs = ["foo.h"],
    hdrs = ["foo.cc"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":foo"],
)

refresh_compile_commands(
    name = "refresh_compile_commands_bad",
    targets = {
        "//:main": "",
    },
)

refresh_compile_commands(
    name = "refresh_compile_commands_good",
    targets = {
        "//:main": "--cxxopt=-xc++",
    },
)
