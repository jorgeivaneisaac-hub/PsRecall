<p align="center">
  <img src="assets/docs/psrecall-logo.svg" alt="PsRecall Logo" width="360" />
</p>

<p align="center">
  <b>A high-performance C++ background navigation engine for shell environments.</b>
</p>

<p align="center">
  <img src="https://github.com/jorgeivaneisaac-hub/PsRecall/actions/workflows/ci.yml/badge.svg" alt="CI Status">
  <img src="https://img.shields.io/badge/standard-C++20-blue.svg" alt="C++ Standard">
  <img src="https://img.shields.io/badge/license-MIT-green.svg" alt="License">
</p>

---

## Overview

**PsRecall** tracks, analyzes, and prioritizes shell directory navigation by evaluating visit frequency and real-time dwell time. Engineered with enterprise-grade standards, strict linters, and zero-allocation critical paths, it provides instant retrieval of high-priority project directories.

## Architecture

* **`core::search`**: Core domain logic encapsulating navigation entities.
* **`Ruta`**: Tracks raw path navigation metrics (`numbers_visits` and accumulated `time`).
* **`RutaPriori`**: Combines navigation data with a calculated score (`cali`).
* **`Searcher`**: Manages real-time updates, timing loops, and heuristic sorting.

## Requirements

* **Compiler**: A modern C++20 compliant compiler (GCC, Clang, or MSVC).
* **Build System**: CMake 3.20 or higher.
* **Tooling**: `vcpkg` (optional, for dependency management).

## Building from Source

```bash
# Clone the repository
git clone [https://github.com/jorgeivaneisaac-hub/PsRecall.git](https://github.com/jorgeivaneisaac-hub/PsRecall.git)
cd PsRecall

# Configure and build in Release mode
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release

```

## Contributing

Please read [CONTRIBUTING](CONTRIBUTING.md) for details on our code of conduct, static analysis guidelines (.clang-tidy, .clang-format), and the pull request process.

## License

Distributed under the MIT License. See [LICENSE](LICENSE) for more information.
