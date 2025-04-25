# C++20 features test project

This project contains simple C++20 code samples and a bit of CMake code to test if they are supported by a given compiler.

| Compiler   | Comparison of integers | Concept           | Consteval | Span     |
|------------|------------------------|-------------------|-----------|----------|
| GCC        | 10.1.0                 | 10.1.0            | 10.1.0    | 10.1.0   |
| Clang      | 11.1.0                 | 10.0.1            | 9.0.1     | 11.1.0   |
| AppleClang | 13.1.6?                | 12.0.0? (partial) | 15.0.0?   | 10.0.0?  |
| IntelLLVM  | 2023.0.0               | <2022.1.1         | <2022.1.1 | 2023.0.0 |
| NVCC       | 12.0.0                 | 12.0.0            | 12.0.0    | 12.0.0   |
| NVHPC      | 24.1.0                 | 20.11             | 20.7?     | 24.1.0   |
| ROCM       |                        |                   |           |          |
| MSVC       | 19.27?                 | 19.30?            | 19.29?    | 19.26    |
| ARM/Clang  |                        |                   |           |          |
