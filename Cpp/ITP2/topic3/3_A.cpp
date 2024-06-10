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
  int a, b, c;
  std::cin >> a >> b >> c;

  // minimum.
  if (a <= b && a <= c)
  {
    std::cout << a << " ";
  }
  else if (b <= a && b <= c)
  {
    std::cout << b << " ";
  }
  else if (c <= a && c <= b)
  {
    std::cout << c << " ";
  }

  // maximum.
  if (a >= b && a >= c)
  {
    std::cout << a << std::endl;
  }
  else if (b >= a && b >= c)
  {
    std::cout << b << std::endl;
  }
  else if (c >= a && c >= b)
  {
    std::cout << c << std::endl;
  }
  return 0;
}
