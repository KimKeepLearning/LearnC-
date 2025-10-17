#include <iostream>

#define PRINT_JOE

int main() {
#ifdef PRINT_JOE
  std::cout << "Joe\n";
#endif
}