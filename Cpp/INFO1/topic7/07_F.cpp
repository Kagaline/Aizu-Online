#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int a, b, c;
  std::cin >> a >> b >> c;

  // a,b,cの内、最も小さい値を出力.
  // 小さい値が複数ある場合はa,b,cの順に優先して出力.
  if (a <= b && a <= c) {
    std::cout << a << std::endl;
  } else if (b <= a && b <= c) {
    std::cout << b << std::endl;
  } else if (c <= a && c <= b) {
    std::cout << c << std::endl;
  }

  return 0;
}
