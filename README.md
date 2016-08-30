## Overview

Use *cpp_feature* to uniformly check for language and standard library *(tbd)* features of your C++ toolchain, across platforms.

- It provides feature testing macros, as specified by the standard
  [SD-6: SG10 Feature Test Recommendations](https://isocpp.org/std/standing-documents/sd-6-sg10-feature-test-recommendations),
  to compilers that don't have them built in (e.g. Microsoft Visual C++).

- It irons out inconsistencies, where implementation-provided macros don't follow the above specification. For example:
  * GCC defines `__cpp_rvalue_reference` instead of `__cpp_rvalue_references`
  * Clang declares support for two-parameter `static_assert`, but in fact supports also the one-parameter version

- It also provides Clang's `__has_feature` macro to other compilers. This is useful for porting existing code,
  but also to test for features not covered by the standard macros.


## Usage

The best way to use it is to add `include/feature.hpp` to the list of forced includes (most compilers support them).
Then you don't have to do anything to start using the macros.

Otherwise simply `#include <feature.hpp>` at the beginning of your source file.

- **Visual Studio**

  Recent versions of Visual Studio have a built-in NuGet package manager. To add *cpp_feature* to your project,
  enter this command into the Package Manager Console:

      Install-Package cpp_feature

  Note: This will automatically set `feature.hpp` as a forced include in your Visual C++ project.

- **Manual Setup**

  Just copy the `include` directory to your project and add it to the list of include directories.


## Compiler Support

Currently the library supports Clang, GCC and MSVC.

You can check this [feature support matrix](https://alespergl.github.io/cpp_feature-pages/) to see which toolchain supports what.

Other toolchains will be added based on need and availability of those toolchains. I'd like the library to support
as many toolchains as possible. However it's clear that I will not be able to maintain all versions of any odd compiler
out there, so contributions are always welcome. Please stay tuned for written instructions on how to submit a pull
request with new toolchain support.


## Missing Feature Test Macros

The list of features that could be checked for, but are currently not supported, is long. I started with just some
of the core language features, but the plan is to add support for all macros specified in the standard, including library
feature macros. Naturally, feel free to contribute.


## Bugs

If you think you found a bug in the library or the test suite, please open an issue, or even better, submit a pull request
with a fix.

Thank you.
