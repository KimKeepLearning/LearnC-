#include <iostream>
#include <string_view>

// Prefer std::string_view over std::string when you need a read-only string, 
// especially for function parameters.
void pringSv(std::string_view sv) {
  std::cout << "sv: " << sv << '\n';

}

int main() {
  std::string_view s1{"Hello, world!"};
  pringSv(s1);
  return 0;
}

// std::string is a owner, std::string_view is a viewer