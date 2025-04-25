#include <type_traits>

template <typename T>
concept Integral = requires(T t) { std::is_integral<T>(); };

template <Integral T> T add(T const a, T const b) { return a + b; }

int main() { int a = add(1, 2); }
