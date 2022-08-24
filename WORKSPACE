workspace(name = "compile-commands-testing")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Hedron's Compile Commands Extractor for Bazel
# https://github.com/hedronvision/bazel-compile-commands-extractor
HEDRON_COMPILE_COMMANDS_COMMIT = "05610f52a2ea3cda6ac27133b96f71c36358adf9"

http_archive(
    name = "hedron_compile_commands",
    sha256 = "78776448d9684dc6d6f50f37c94014f1d1b054c392050214f61a3ddc5ece64e2",
    strip_prefix = "bazel-compile-commands-extractor-" + HEDRON_COMPILE_COMMANDS_COMMIT,
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/" + HEDRON_COMPILE_COMMANDS_COMMIT + ".tar.gz",
)
