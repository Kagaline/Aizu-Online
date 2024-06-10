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

  std::vector<int> vec;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int b, e, k;
    std::cin >> b >> e >> k;

    int num_k = std::count(vec.begin() + b, vec.begin() + e, k);
    std::cout << num_k << std::endl;
  }

  return 0;
}
