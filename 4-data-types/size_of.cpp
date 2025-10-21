#include <iostream>
#include <iomanip> // for std::setw
#include <climits> // for CHAR_BIT

int main() {
  std::cout << "A byte is " << CHAR_BIT << " bits.\n\n";
  std::cout << std::left;

  std::cout << std::setw(16) << "bool: " << sizeof(bool) << " bits\n";
  std::cout << std::setw(16) << "char: " << sizeof(char) << " bits\n";
  std::cout << std::setw(16) << "short: " << sizeof(short) << " bits\n";
  std::cout << std::setw(16) << "int: " << sizeof(int) << " bits\n";
  std::cout << std::setw(16) << "long: " << sizeof(long) << " bits\n";
  std::cout << std::setw(16) << "long long: " << sizeof(long long) << " bits\n";
  std::cout << std::setw(16) << "float: " << sizeof(float) << " bits\n";
  std::cout << std::setw(16) << "double: " << sizeof(double) << " bits\n";
  std::cout << std::setw(16) << "long double: " << sizeof(long double) << " bits\n";

  return 0;
}