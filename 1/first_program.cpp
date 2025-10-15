#include <iostream>

int main() {

  int x{};
  std::cout << "Enter a integer: ";
  std::cin >> x;
  std::cout << "Double that number is " << x * 2 << '\n';

  return 0;
}