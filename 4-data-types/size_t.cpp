#include <cstddef>
#include <iostream>

int main() {
  std::cout << sizeof(std::size_t) << std::endl;

  int x{5};
  std::size_t size {sizeof(x)}; // size_t can hold the size of any object in bytes
  std::cout << "Size of x: " << size << std::endl;

  return 0;
}