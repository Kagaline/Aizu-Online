#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int binary_search(std::vector<int> &vec, int key);

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

    if (binary_search(vec, key) != -1) {
      std::cout << "Yes" << std::endl;
    } else {
      std::cout << "No" << std::endl;
    }
  }

  return 0;
}

int binary_search(std::vector<int> &vec, int key) {

  int begin = 0;
  int end = vec.size();

  while (begin < end) {
    int mid = (begin + end) / 2;

    if (vec.at(mid) == key) {
      return mid;
    }
    if (vec.at(mid) < key) {
      begin = mid + 1;
    } else {
      end = mid;
    }
  }

  return -1;
}
