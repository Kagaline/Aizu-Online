#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec) {
    std::cin >> x;
  }

  int first, last;
  std::cin >> first >> last;

  for (int i = first; i <= last; i++) {
    std::cout << vec.at(i) << std::endl;
  }

  return 0;
}
