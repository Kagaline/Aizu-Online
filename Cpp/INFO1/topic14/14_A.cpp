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

  int key;
  std::cin >> key;

  for (auto itr = vec.begin(); itr != vec.end(); itr++) {
    if (*itr == key) {
      std::cout << "Yes" << std::endl;

      return 0;
    }
  }

  std::cout << "No" << std::endl;

  return 0;
}
