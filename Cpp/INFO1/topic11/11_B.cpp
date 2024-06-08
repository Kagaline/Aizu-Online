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
  std::vector<std::string> words;

  std::string input;
  while (std::cin >> input)
  {
    words.push_back(input);
  }

  for (auto itr = words.end() - 1; itr != words.begin() - 1; itr--)
  {
    std::cout << *itr << std::endl;
  }

  return 0;
}