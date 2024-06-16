#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  bool a, b, c;
  std::cin >> a >> b >> c;

  std::cout << (!(a && b) || c) << std::endl;

  return 0;
}
