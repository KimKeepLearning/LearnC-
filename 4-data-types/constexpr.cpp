#include <iostream>


int max(int x, int y) {
  return (x > y) ? x : y;
}

constexpr int cmax(int x, int y) {
  return (x > y) ? x : y;
}

int main() {
  int m1 {max(5, 10)};
  constexpr int m2 {cmax(5, 10)};

  std::cout << "m1: " << m1 << std::endl;
  std::cout << "m2: " << m2 << std::endl;

  return 0;
}