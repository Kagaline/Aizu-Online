#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void)
{
  std::string s;
  std::cin >> s;

  if (std::all_of(s.begin(), s.end(), [](char c) { return ('0' <= c && c <= '9'); }))
  {
    std::cout << std::stoi(s) + 1 << std::endl;
  }
  else
  {
    std::cout << s << std::endl;
  }

  return 0;
}
