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

  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;

    for (int j = 0; j < x; ++j)
    {
      std::cout << "#";
    }
    std::cout << " " << x << std::endl;
  }

  return 0;
}
