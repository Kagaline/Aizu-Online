#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec) {
    std::cin >> x;
  }

  bool is_ascending = true;
  for (auto itr = vec.begin() + 1; itr != vec.end(); itr++) {
    if (*(itr - 1) > *itr) {
      is_ascending = false;
    }
  }

  if (is_ascending) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
