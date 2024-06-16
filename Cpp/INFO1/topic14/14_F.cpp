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
int linear_search(std::vector<int> &vec, int key);

int main(void) {
  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec) {
    std::cin >> x;
  }

  int key;
  std::cin >> key;

  linear_search(vec, key);
  binary_search(vec, key);

  return 0;
}

int binary_search(std::vector<int> &vec, int key) {

  int begin = 0;
  int end   = vec.size();

  while (begin < end) {

    const int mid = (begin + end) / 2;
    std::cout << " " << vec.at(mid);

    if (vec.at(mid) == key) {
      std::cout << std::endl;
      return mid;
    }

    if (vec.at(mid) < key) {
      begin = mid + 1;
    } else {
      end = mid;
    }
  }

  std::cout << std::endl;
  return -1;
}

int linear_search(std::vector<int> &vec, int key) {

  int length = vec.size();

  for (int i = 0; i < length; i++) {

    std::cout << " " << vec.at(i);

    if (vec.at(i) == key) {
      std::cout << std::endl;
      return i;
    }
  }

  std::cout << std::endl;
  return -1;
}
