#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  int n, m, l;
  std::cin >> n >> m >> l;

  // 行列.
  std::vector<std::vector<long int>> matrix_A(n, std::vector<long int>(m, 0));
  std::vector<std::vector<long int>> matrix_B(m, std::vector<long int>(l, 0));
  std::vector<std::vector<long int>> matrix_C(n, std::vector<long int>(l, 0));

  // 行列Aの初期化.
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      int x;
      std::cin >> x;
      matrix_A.at(i).at(j) = x;
    }
  }

  // 行列Bの初期化.
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      int x;
      std::cin >> x;
      matrix_B.at(i).at(j) = x;
    }
  }

  // 行列Cの計算.
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      for (int k = 0; k < m; ++k)
      {
        matrix_C.at(i).at(j) += matrix_A.at(i).at(k) * matrix_B.at(k).at(j);
      }
    }
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < l; ++j)
    {
      std::cout << matrix_C.at(i).at(j);
      if (j != (l - 1))
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
