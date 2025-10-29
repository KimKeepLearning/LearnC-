#include <string>
#include <iostream>

std::string getName(int index) {
  std::string name{};
  std::cout << "Enter the name of person #" << index << ": ";
  std::getline(std::cin >> std::ws, name);
  return name;
}

int getAge(std::string_view name) {
  int age;
  std::cout << "Enter the age of person " << name << ": ";
  std::cin >> age;
  return age;
}

int main() {
  std::string name1 {getName(1)};
  int age1 = getAge(name1);
  std::string name2 {getName(2)};
  int age2 = getAge(name2);

  if (age1 > age2) {
    std::cout << name1 << " is older than " << name2 << ".\n";
  } else if (age2 > age1) {
    std::cout << name2 << " is older than " << name1 << ".\n";
  } else {
    std::cout << name1 << " and " << name2 << " are of the same age.\n";
  }
  return 0;
}