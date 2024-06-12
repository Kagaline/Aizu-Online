#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
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
  std::set<int> set_A;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    set_A.insert(x);
  }

  int m;
  std::cin >> m;
  std::set<int> set_B;
  for (int i = 0; i < m; i++)
  {
    int x;
    std::cin >> x;
    set_B.insert(x);
  }

  std::vector<int> vec_set_C;
  std::set_intersection(set_A.begin(), set_A.end(), set_B.begin(), set_B.end(),
                        std::back_inserter(vec_set_C));

  for (auto itr = vec_set_C.begin(); itr != vec_set_C.end(); itr++)
  {
    std::cout << (*itr) << std::endl;
  }

  return 0;
}
