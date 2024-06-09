#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

void print_array(std::vector<int> vec)
{
  std::cout << "(";
  for (auto itr = vec.begin(); itr != vec.end(); ++itr)
  {
    std::cout << *itr;
    if (itr != vec.end() - 1)
    {
      std::cout << ", ";
    }
  }
  std::cout << ")";
  std::cout << std::endl;
}

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  print_array(vec);

  return 0;
}
