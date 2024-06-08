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
    int i_1, i_2, j_1, j_2;
    std::cin >> i_1 >> j_1 >> i_2 >> j_2;
    for (int r = i_1; r <= i_2; r++)
    {
      for (int c = j_1; c <= j_2; c++)
      {
        matrix.at(r).at(c) += 1;
      }
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
