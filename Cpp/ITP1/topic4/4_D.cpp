#include <iomanip>
#include <iostream>

int main(void) {

  int n;
  std::cin >> n;

  int range_maximum    = -1000000;
  int range_minimum    = 1000000;
  long int range_total = 0;

  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;

    if (x < range_minimum) {
      range_minimum = x;
    }

    if (x > range_maximum) {
      range_maximum = x;
    }

    range_total += x;
  }

  std::cout << range_minimum << " " << range_maximum << " " << range_total << std::endl;

  return 0;
}
