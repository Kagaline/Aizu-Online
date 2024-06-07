#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

void print_out(std::vector<int>& vec)
{
  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    std::cout << *itr;
    if (itr != (vec.end() - 1))
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}

int main(void)
{
  int n;
  std::cin >> n;

  // 配列の初期化.
  std::vector<int> vec;
  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  print_out(vec);

  // insertion sort.
  for (auto itr_i = vec.begin() + 1; itr_i != vec.end(); ++itr_i)
  {
    int v = *itr_i;
    auto itr_j = itr_i - 1;
    while (itr_j >= vec.begin() && *itr_j > v)
    {
      *(itr_j + 1) = *itr_j;
      itr_j--;
    }
    *(itr_j + 1) = v;

    print_out(vec);
  }

  return 0;
}
