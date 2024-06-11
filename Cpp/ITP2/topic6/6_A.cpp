#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec)
  {
    std::cin >> x;
  }

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int k;
    std::cin >> k;
    std::cout << std::binary_search(vec.begin(), vec.end(), k) << std::endl;
  }

  return 0;
}
