#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int linear_search(std::vector<int> &vec, int key);

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec) {
    std::cin >> x;
  }

  int q;
  std::cin >> q;

  for (int i = 0; i < q; ++i) {

    int key;
    std::cin >> key;

    if (linear_search(vec, key) != -1) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << "No" << std::endl;
    }
  }

  return 0;
}

int linear_search(std::vector<int> &vec, int key) {
  int length = vec.size();
  for (int i = 0; i < length; i++) {
    if (vec.at(i) == key) {
      return i;
    }
  }
  return -1;
}
