#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
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

  int key;
  std::cin >> key;

  bool key_exist = false;
  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    if (*itr == key)
    {
      key_exist = true;
    }
  }
  if (key_exist)
  {
    std::cout << "Yes" << std::endl;
  }
  else
  {
    std::cout << "No" << std::endl;
  }

  return 0;
}
