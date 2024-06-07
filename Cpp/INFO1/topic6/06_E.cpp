#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  bool prop_A = (a == b) && (c == d);
  bool prop_B = (a == c) && (b == d);
  std::cout << (prop_A || prop_B) << std::endl;

  return 0;
}
