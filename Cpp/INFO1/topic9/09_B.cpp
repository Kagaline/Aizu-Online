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

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  int l, r;
  std::cin >> l >> r;

  for (int i = l; i <= r; i++)
  {
    std::cout << vec.at(i) << std::endl;
  }

  return 0;
}
