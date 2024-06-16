#include <iomanip>
#include <iostream>

int main(void) {

  double a, b;
  std::cin >> a >> b;

  int int_a = (int)a;
  int int_b = (int)b;

  std::cout << int_a / int_b << " ";
  std::cout << int_a % int_b << " ";
  std::cout << std::fixed << std::setprecision(15) << a / b << std::endl;

  return 0;
}
