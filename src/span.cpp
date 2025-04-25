#include <span>

int main() {
  constexpr int array[]{0, 1, 2, 4, 5};
  std::span span{array};
}
