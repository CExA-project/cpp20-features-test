#include <utility>

int main() {
  static_assert(12l == 12u);
  static_assert(std::cmp_equal(12l, 12u));

  static_assert(-1 == 0xffffffffu);
  static_assert(std::cmp_not_equal(-1, 0xffffffffu));

  static_assert(-1 > 1u);
  static_assert(std::cmp_less(-1, 1u));

  static_assert(1u < -1);
  static_assert(std::cmp_greater(1u, -1));
}
