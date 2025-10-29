#include <string>
#include <iostream>

int main() {
  std::cout << "Enter your full name: ";
  std::string name{};
  // std::ws is to ignore any whitespace characters (spaces, tabs, newlines) before or after the input
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter your favorite color: ";
  std::string color{};
  std::getline(std::cin >> std::ws, color);

  std::cout << "Your full name is " << name << " and your favorite color is " << color << "." << std::endl;
  return 0;
}