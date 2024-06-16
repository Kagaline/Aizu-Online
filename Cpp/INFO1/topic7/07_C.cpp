#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int x;
  std::cin >> x;

  if (x > 0) {
    std::cout << 1 << std::endl;
  } else if (x == 0) {
    std::cout << 0 << std::endl;
  } else /* if (x < 0) */ {
    std::cout << -1 << std::endl;
  }

  return 0;
}
