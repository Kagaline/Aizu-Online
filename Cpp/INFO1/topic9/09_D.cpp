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

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++) {

    int first, last;
    std::cin >> first >> last;

    for (int j = first; j <= last; j++) {
      vec.at(j) += 1;
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << vec.at(i) << std::endl;
  }

  return 0;
}
