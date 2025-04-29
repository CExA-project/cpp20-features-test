# C++20 features test project

This project contains simple C++20 code samples and a bit of CMake code to test if they are supported by a given compiler.

## Support of the C++20 standard

| Compiler   | Concept           | Consteval | Update Kokkos requirements |
|------------|-------------------|-----------|----------------------------|
| GCC        | 10.1.0            | 10.1.0    | Yes                        |
| Clang      | 10.0.1            | 9.0.<1    | No                         |
| AppleClang | 12.0.0? (partial) | 15.0.0?   | Yes                        |
| IntelLLVM  | <2022.1.1         | <2022.1.1 | Yes (for CPU)              |
| NVCC       | 12.0.0            | 12.0.0    | Yes                        |
| NVHPC      | 20.11             | 20.7?     | No                         |
| ROCM       | <3.7              | <3.7      | No                         |
| MSVC       | 19.30?            | 19.29?    | Yes                        |
| ARM/Clang  |                   |           |                            |

Notes:
- "?" denotes the version was fetched from [cppreference.com](https://en.cppreference.com/w/cpp/compiler_support/20), but not tested experimentally;
- "<" denotes the version is the lowest tested, and is not guaranteed to be the version from which the feature started to be available.

## Support of the C++20 standard library

| Compiler   | Comparison of integers | Span    | Source location | Update Kokkos requirements |
|------------|------------------------|---------|-----------------|----------------------------|
| GCC        | 10.1.0                 | 10.1.0  | 11.1.0          | Yes                        |
| Clang      | 11.1.0                 | 11.1.0  | 15.0.<7         | Yes                        |
| AppleClang | 13.1.6?                | 10.0.0? | 15.0.0?         | Yes                        |
| MSVC       | 19.27?                 | 19.26   | 19.29?          | Yes                        |
| ARM/Clang  |                        |         |                 |                            |

Notes:
- "?" denotes the version was fetched from [cppreference.com](https://en.cppreference.com/w/cpp/compiler_support/20), but not tested experimentally;
- "<" denotes the version is the lowest tested, and is not guaranteed to be the actual version from which the feature started to be available.
