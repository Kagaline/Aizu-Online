#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int a, b, c, d, e;
  std::cin >> a >> b >> c >> d >> e;

  std::cout << a * b * b * b + c * d / e - 100 << std::endl;

  return 0;
}
