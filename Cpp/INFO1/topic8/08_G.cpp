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

  int t;
  std::cin >> t;

  int sum_of = 0;
  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;
    sum_of += x;
    if (sum_of >= t)
    {
      std::cout << sum_of << std::endl;
      break;
    }
  }

  return 0;
}
