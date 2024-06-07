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

  std::vector<int> vec(n, 0);

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int k;
    std::cin >> k;
    vec.at(k) += 1;
  }

  for (int i = 0; i < n; ++i)
  {
    std::cout << vec.at(i) << std::endl;
  }

  return 0;
}
