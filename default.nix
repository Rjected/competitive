with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "competitive";

  buildInputs = [
    pkgs.bazel
    pkgs.clang
  ];
}
