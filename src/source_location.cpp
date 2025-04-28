#include <iostream>
#include <source_location>

int main() {
  auto const location = std::source_location::current();

  std::cout << location.file_name() << '(' << location.line() << ':'
            << location.column() << ") `" << location.function_name() << "`\n";
}
