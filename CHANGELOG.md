# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- Initial project structure and CMake configuration for C++20.
- Core process searching engine tailored for PowerShell environments.
- CI/CD workflows and automated coverage tracking.

---

## [0.1.0] - 2026-09-12

### Added
- First stable release of PsRecall.
- Strict compiler warning flags enforcement (`/W4 /wx /permissive-` for MSVC, `-Wall -Wextra -Wpedantic -Werror` for Clang/GCC).
- Integration support via `vcpkg`.
