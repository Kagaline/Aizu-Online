#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void) {

  int n;
  std::cin >> n;

  std::set<int> bucket;

  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    bucket.insert(x);
  }

  for (auto itr = bucket.begin(); itr != bucket.end(); itr++) {
    std::cout << *itr << std::endl;
  }

  return 0;
}
