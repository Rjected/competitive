load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_kythe_kythe",
  urls = ["https://github.com/kythe/kythe/archive/33b83453a40fa6555cadaa2dab517d2c49510073.zip"],
  strip_prefix = "kythe-33b83453a40fa6555cadaa2dab517d2c49510073",
  sha256 = "7948def687d1bfcab0759823d95165dcc2bfdde1c5b83bae60c693bc907591d6",
)

# Abseil CPP, a library which provides very convenient types and containers.
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/7680a5f8efe32de4753baadbd63e74e59d95bac1.zip"],
  strip_prefix = "abseil-cpp-7680a5f8efe32de4753baadbd63e74e59d95bac1",
  sha256 = "f8ddc9060b118c667995f608490816a0ae32ae3e8ed612fb70230cbf671d7ceb",
)

# GoogleTest/GoogleMock framework. Used by most unit-tests.
http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/8567b09290fe402cf01923e2131c5635b8ed851b.zip"],  # 2020-06-12T22:24:28Z
    strip_prefix = "googletest-8567b09290fe402cf01923e2131c5635b8ed851b",
    sha256 = "9a8a166eb6a56c7b3d7b19dc2c946fe4778fd6f21c7a12368ad3b836d8f1be48",
)

# Google benchmark.
http_archive(
    name = "com_github_google_benchmark",
    urls = ["https://github.com/google/benchmark/archive/16703ff83c1ae6d53e5155df3bb3ab0bc96083be.zip"],
    strip_prefix = "benchmark-16703ff83c1ae6d53e5155df3bb3ab0bc96083be",
    sha256 = "59f918c8ccd4d74b6ac43484467b500f1d64b40cc1010daa055375b322a43ba3",
)

# C++ rules for Bazel.
http_archive(
    name = "rules_cc",
    sha256 = "9a446e9dd9c1bb180c86977a8dc1e9e659550ae732ae58bd2e8fd51e15b2c91d",
    strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
    urls = [
        "https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip",
    ],
)
