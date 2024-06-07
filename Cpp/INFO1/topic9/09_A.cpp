#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec;

  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  int k;
  std::cin >> k;
  std::cout << vec.at(k) << std::endl;

  return 0;
}
