#include <iostream>

int main(void) {

  int a, b;
  std::cin >> a >> b;

  if (a > b) {
    std::cout << "a > b" << std::endl;
  } else if (a == b) {
    std::cout << "a == b" << std::endl;
  } else if (a < b) {
    std::cout << "a < b" << std::endl;
  }

  return 0;
}
