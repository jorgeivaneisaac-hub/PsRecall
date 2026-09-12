# Contributing to PsRecall

First off, thank you for taking the time to contribute! 🎉 PsRecall is an open-source project, and we appreciate every bit of help to make it better.

To ensure a smooth collaboration, please follow the guidelines outlined in this document.

---

## Code of Conduct

By participating in this project, you agree to abide by its terms. Please report unacceptable behavior to the project maintainers.

---

## How Can I Contribute?

### 1. Reporting Bugs
If you find a bug in the source code or a mistake in the documentation, please open an issue on GitHub. Include the following details:
- **Clear description** of the problem.
- **Steps to reproduce** the behavior.
- **Environment details** (OS, C++ compiler version, CMake version).
- **Logs or error messages** if applicable.

### 2. Suggesting Enhancements
Have an idea to improve PsRecall? Open an enhancement request issue and include:
- A clear description of the feature.
- Why this feature would be useful to other users.
- Potential implementation ideas (if you have them).

### 3. Pull Requests
We welcome code contributions via Pull Requests (PRs). Follow these steps to submit your changes:

1. **Fork the repository** and create your feature branch from `main`:
    ```bash
    git checkout -b feature/amazing-feature
    ```
2. **Set up your environment**: Ensure you are using a modern compiler supporting C++20 and strict flags matching the project configuration (-Wall -Wextra -Wpedantic -Werror or MSVC equivalents).

3. **Write clean code**: Follow the existing code style, naming conventions, and strict C++20 standards.

4. **Test your changes**: Verify that everything compiles cleanly without warnings and that your additions work as expected.

5. **Commit your changes** using a clear and descriptive commit message (following conventional commits is encouraged, e.g., feat: add process filtering by name).

6. **Push to your** fork and open a Pull Request against the main branch of this repository.

### Development Guidelines

**Standards**: The project requires C++20 (CMAKE_CXX_STANDARD 20). Avoid compiler extensions unless strictly necessary (CMAKE_CXX_EXTENSIONS OFF).

**Warnings**: Code must compile with strict warning levels enabled (/W4 /wx /permissive- on MSVC, -Wall -Wextra -Wpedantic -Werror on GCC/Clang). Do not introduce code that generates compiler warnings.

**Includes**: Use the include/ directory structure properly to keep headers organized and avoid deeply nested relative paths (#include "...").

*Thank you for helping us build PsRecall!*
