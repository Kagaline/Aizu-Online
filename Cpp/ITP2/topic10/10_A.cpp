#include <algorithm>
#include <bitset>
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
  unsigned int x;
  std::cin >> x;

  // 32bitのビット列.
  std::bitset<32> b(x);
  std::cout << b << std::endl;

  // flip.
  std::cout << ~b << std::endl;

  // left shift.
  std::cout << (b << 1) << std::endl;

  // right shift.
  std::cout << (b >> 1) << std::endl;

  return 0;
}
