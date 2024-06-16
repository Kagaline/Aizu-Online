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

  // linear search.
  std::cout << n << std::endl;

  // binary search.
  // 計算式はこれで正解しているのか？.
  std::cout << (int)std::ceil(std::log2(n)) + 1 << std::endl;
  return 0;
}
