#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void) {

  std::string s;
  std::cin >> s;

  bool s_is_digit = std::all_of(s.begin(), s.end(), [](char c) { return ('0' <= c && c <= '9'); });

  if (s_is_digit) {
    std::cout << std::stoi(s) + 1 << std::endl;
  } else {
    std::cout << s << std::endl;
  }

  return 0;
}
