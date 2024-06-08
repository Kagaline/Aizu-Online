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
  int n, m, q;
  std::cin >> n >> m >> q;

  std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));

  for (int i = 0; i < q; i++)
  {
    int x, y;
    std::cin >> x >> y;
    if (matrix.at(x).at(y) == 0)
    {
      matrix.at(x).at(y) = 1;
    }
    else if (matrix.at(x).at(y) == 1)
    {
      matrix.at(x).at(y) = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      std::cout << matrix.at(i).at(j);
      if (j != m - 1)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
