#include <iostream>

int main() {
  int width { 5 };
  [[maybe_unused]] int a;
  int b = 5;
  int c (6);
  int d {7};
  int e {};
  std::cout << width;

  return 0;  
}