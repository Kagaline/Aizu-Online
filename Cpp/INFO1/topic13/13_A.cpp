#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int add1(int x);

int main(void) {
  int a;
  std::cin >> a;

  std::cout << add1(a) << std::endl;

  return 0;
}

int add1(int x) {
  return x + 1;
}
