#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int a;
  std::cin >> a;

  // aの10乗.
  std::cout << a * a * a * a * a * a * a * a * a * a << std::endl;
  // std::cout << std::fixed << std::setprecision(0) << std::pow(a, 10) << std::endl;

  return 0;
}
