#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  int r, c;
  std::cin >> r >> c;

  std::vector<std::vector<int>> sheet(r + 1, std::vector<int>(c + 1, 0));

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      int x;
      std::cin >> x;

      sheet.at(i).at(j) = x;
      sheet.at(i).at(c) += x;
      sheet.at(r).at(j) += x;
      sheet.at(r).at(c) += x;
    }
  }

  for (int i = 0; i <= r; ++i)
  {
    for (int j = 0; j <= c; ++j)
    {
      std::cout << sheet.at(i).at(j);
      if (j != c)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
