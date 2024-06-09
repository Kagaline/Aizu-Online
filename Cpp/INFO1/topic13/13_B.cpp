#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

void print_n_c(char c, int n)
{
  for (int i = 0; i < n; ++i)
  {
    std::cout << c;
  }
  std::cout << std::endl;
}

int main(void)
{
  int n;
  char c;
  std::cin >> n >> c;

  print_n_c(c, n);
  return 0;
}
