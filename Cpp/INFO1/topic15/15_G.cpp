#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int classify_sort_status(std::vector<int> &vec)
{
  bool is_strict_increasing = true;  // 狭義単調増加である.
  bool is_increasing = true;         // 単調増加である.
  bool is_decreasing = true;         // 単調減少である.
  bool is_strict_decreasing = true;  // 狭義単調減少である.
  for (auto itr = vec.begin() + 1; itr != vec.end(); itr++)
  {
    // 狭義単調増加を満たさない.
    if (!(*(itr - 1) < *itr))
    {
      is_strict_increasing = false;
    }

    // 単調増加を満たさない.
    if (!(*(itr - 1) <= *itr))
    {
      is_increasing = false;
    }

    // 単調減少を満たさない.
    if (!(*(itr - 1) >= *itr))
    {
      is_decreasing = false;
    }

    // 狭義単調減少を満たさない.
    if (!(*(itr - 1) > *itr))
    {
      is_strict_decreasing = false;
    }
  }

  int classify_status;

  if (is_strict_increasing)
  {
    classify_status = 2;
  }
  else if (is_strict_decreasing)
  {
    classify_status = -2;
  }
  else if (is_increasing && is_decreasing)
  {
    classify_status = 0;
  }
  else if (is_increasing)
  {
    classify_status = 1;
  }
  else if (is_decreasing)
  {
    classify_status = -1;
  }

  return classify_status;
}

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec)
  {
    std::cin >> x;
  }

  std::cout << classify_sort_status(vec) << std::endl;
  return 0;
}
