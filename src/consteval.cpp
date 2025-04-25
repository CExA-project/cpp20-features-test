consteval int add(int const a, int const b) { return a + b; }

int main() { static_assert(add(1, 2) == 3); }
