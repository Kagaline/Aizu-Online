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

  int num_elements = 0;
  for (int i = 0; i < n; i++) {

    int x;
    std::cin >> x;

    if (x == 0) {
      std::cout << num_elements << std::endl;
      num_elements = 0;
    } else {
      num_elements += 1;
    }
  }

  return 0;
}
