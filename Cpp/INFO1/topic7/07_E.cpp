#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int a, b;
  std::cin >> a >> b;

  // a, bの小さいほうを出力. 同じ値ならbを出力.
  if (a < b) {
    std::cout << a << std::endl;
  } else {
    std::cout << b << std::endl;
  }

  return 0;
}
