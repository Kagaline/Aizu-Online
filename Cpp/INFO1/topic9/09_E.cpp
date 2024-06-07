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

  std::vector<int> vec_A;
  std::vector<int> vec_B;

  for (int i = 0; i < 2 * n; ++i)
  {
    int x;
    std::cin >> x;
    if (x < 0)
    {
      vec_A.push_back(x);
    }
    else
    {
      vec_B.push_back(x);
    }
  }

  for (int i = 0; i < n; i++)
  {
    std::cout << vec_A.at(i) << " " << vec_B.at(i) << std::endl;
  }

  return 0;
}
