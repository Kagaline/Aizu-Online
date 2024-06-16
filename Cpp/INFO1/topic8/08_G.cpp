#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int n, t;
  std::cin >> n >> t;

  int total = 0;
  for (int i = 0; i < n; ++i) {

    int x;
    std::cin >> x;

    total += x;

    if (total >= t) {
      std::cout << total << std::endl;
      break;
    }
  }

  return 0;
}
