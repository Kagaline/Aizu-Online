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

  for (int i = 0; i < s.size(); i++)
  {
    std::cout << s.at(i) << std::endl;
  }

  return 0;
}
