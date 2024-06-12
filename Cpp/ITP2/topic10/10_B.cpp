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
  unsigned int a, b;
  std::cin >> a >> b;

  std::bitset<32> bs_A(a), bs_B(b);

  // AND.
  std::cout << (bs_A & bs_B) << std::endl;

  // OR.
  std::cout << (bs_A | bs_B) << std::endl;

  // XOR.
  std::cout << (bs_A ^ bs_B) << std::endl;

  return 0;
}
