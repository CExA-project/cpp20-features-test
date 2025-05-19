# C++20 features test project

This project contains simple C++20 code samples and a bit of CMake code to test if they are supported by a given compiler.

## Support of the C++20 standard

| Compiler   | Concept           | Consteval | Modules                      | Kokkos current                 | Latest   |
|------------|-------------------|-----------|------------------------------|--------------------------------|----------|
| GCC        | 10.1.0            | 10.1.0    | 11.1.0 (with `-fmodules-ts`) | 8.2.0                          | 15.1.0   |
| Clang      | 10.0.<1           | 9.0.<1    | 9.0.<1                       | 8.0.0                          | 21       |
| AppleClang | 12.0.0? (partial) | 15.0.0?   | 10.0.1?                      | 8.0                            |          |
| IntelLLVM  | <2021.4           | <2021.4   | <2021.4                      | 2021.1.1 (CPU), 2023.0.0 (GPU) | 2025.1.2 |
| NVCC       | 12.0.0            | 12.0.0    | No                           | 11.0                           | 12.9     |
| NVHPC      | 20.11             | 20.7?     | No                           | 22.3                           | 25.3     |
| ROCM       | <3.7              | <3.7      | <3.7                         | 5.2.0                          | 6.4      |
| MSVC       | 19.30?            | 19.29?    | 19.28?                       | 19.29?                         | 19.42    |
| ARM/Clang  |                   |           |                              | 20.1                           |          |

Notes:
- "?" denotes the version was fetched from [cppreference.com](https://en.cppreference.com/w/cpp/compiler_support/20), but not tested experimentally;
- "<" denotes the version is the lowest tested, and is not guaranteed to be the version from which the feature started to be available.

## Support of the C++20 standard library

| Compiler   | Assume aligned                  | Comparison of integers | Modules | Source location | Span    | Kokkos current | Latest |
|------------|---------------------------------|------------------------|---------|-----------------|---------|----------------|--------|
| GCC        | 9.1.0 (non `constexpr`), 11.1.0 | 10.1.0                 | No      | 11.1.0          | 10.1.0  | 8.2.0          | 15.1.0 |
| Clang      | 15.0.<7                         | 13.0.<1?               | No      | 16.0.<6         | 7.<1.0  | 8.0.0          | 21     |
| AppleClang | 14.0.3?                         | 13.1.6?                |         | 15.0.0?         | 10.0.0? | 8.0            |        |
| MSVC       | 19.28?                          | 19.27?                 | 19.29?        | 19.29?          | 19.26   | 19.29          | 19.42  |
| ARM/Clang  |                                 |                        |         |                 |         |                |        |

Notes:
- "?" denotes the version was fetched from [cppreference.com](https://en.cppreference.com/w/cpp/compiler_support/20), but not tested experimentally;
- "<" denotes the version is the lowest tested, and is not guaranteed to be the actual version from which the feature started to be available.
