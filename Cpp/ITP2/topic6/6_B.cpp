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
  std::vector<int> vec_A(n, 0);
  for (auto &x : vec_A)
  {
    std::cin >> x;
  }

  int m;
  std::cin >> m;
  std::vector<int> vec_B(m, 0);
  for (auto &x : vec_B)
  {
    std::cin >> x;
  }

  std::cout << std::includes(vec_A.begin(), vec_A.end(), vec_B.begin(), vec_B.end()) << std::endl;

  return 0;
}
