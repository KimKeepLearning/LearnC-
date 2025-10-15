#include <iostream>

int main() {
  // prefer \n over std::endl when outputting text to the console
  std::cout << 4 << std::endl;
  std::cout << "NEW LINE here\n";

  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  std::cout << "You entered " << x << '\n';

  std::cout << "Enter two numbers separated by a space: ";
  int y{}, z{};
  std::cin >> y >> z;
  std::cout << "You entered " << y << " and " << z << '\n';
  return 0;
}
