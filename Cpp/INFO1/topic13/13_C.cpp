#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int at_0(std::vector<int> &vec);

int main(void) {
  int n;
  std::cin >> n;

  std::vector<int> vec;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  std::cout << at_0(vec) << std::endl;

  return 0;
}

int at_0(std::vector<int> &vec) {
  return vec.at(0);
}
