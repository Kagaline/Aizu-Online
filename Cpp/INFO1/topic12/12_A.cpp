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
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int x;
      std::cin >> x;

      matrix.at(i).at(j) = x;
    }
  }

  int i, j;
  std::cin >> i >> j;
  std::cout << matrix.at(i).at(j) << std::endl;

  return 0;
}
