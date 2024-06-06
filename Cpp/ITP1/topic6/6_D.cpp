#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> matrix(n, std::vector(m, 0));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int x;
      std::cin >> x;
      matrix.at(i).at(j) = x;
    }
  }

  std::vector<int> vec(m, 0);
  for (int i = 0; i < m; i++)
  {
    int x;
    std::cin >> x;
    vec.at(i) = x;
  }

  for (int i = 0; i < n; ++i)
  {
    int dot_product = 0;
    for (int j = 0; j < m; ++j)
    {
      dot_product += matrix.at(i).at(j) * vec.at(j);
    }
    std::cout << dot_product << std::endl;
  }

  return 0;
}
