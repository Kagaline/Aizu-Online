#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  std::string s, p;
  std::cin >> s >> p;

  s = s + s;

  if (s.find(p) == std::string::npos)
  {
    std::cout << "No" << std::endl;
  }
  else
  {
    std::cout << "Yes" << std::endl;
  }

  return 0;
}
