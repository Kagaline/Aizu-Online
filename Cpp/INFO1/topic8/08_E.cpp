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

  for (int y = 0; y < n; ++y) {
    for (int x = 0; x < n; ++x) {
      std::cout << "#";
    }
    std::cout << std::endl;
  }

  return 0;
}
