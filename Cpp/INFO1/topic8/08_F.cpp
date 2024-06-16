#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

void plot_bar(int x) {
  for (int i = 0; i < x; ++i) {
    std::cout << "#";
  }
  std::cout << " " << x << std::endl;
}

int main(void) {

  int n;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {

    int x;
    std::cin >> x;

    plot_bar(x);
  }

  return 0;
}
