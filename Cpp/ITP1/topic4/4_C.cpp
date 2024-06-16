#include <iomanip>
#include <iostream>

int main(void) {

  while (true) {
    int a, b;
    char op;
    std::cin >> a >> op >> b;

    if (op == '?') {
      break;
    }

    if (op == '+') {
      std::cout << a + b << std::endl;
    }

    if (op == '-') {
      std::cout << a - b << std::endl;
    }

    if (op == '*') {
      std::cout << a * b << std::endl;
    }

    if (op == '/') {
      std::cout << a / b << std::endl;
    }
  }
  return 0;
}
