#include <iostream>


int main() {
  double x{};
  double y{};
  char op{};
  std::cout << "Enter a double value: ";
  std::cin >> x;
  std::cout << "Enter a double value: ";
  std::cin >> y;
  std::cout << "Enter +, -, *, or /: ";
  std::cin >> op;

  switch (op) {
    case '+':
      std::cout << x << " + " << y << " = " << x + y << '\n';
      break;
    case '-':
      std::cout << x << " - " << y << " = " << x - y << '\n';
      break;
    case '*':
      std::cout << x << " * " << y << " = " << x * y << '\n';
      break;
    case '/':
      if (y != 0)
        std::cout << x << " / " << y << " = " << x / y << '\n';
      else
        std::cout << "Error: Division by zero\n";
      break;
    default:
      std::cout << "Error: Unknown operator " << op << '\n';
      break;
  
  }

  return 0;
}
