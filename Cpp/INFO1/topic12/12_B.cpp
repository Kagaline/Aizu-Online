#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void) {

  int n, m;
  std::cin >> n >> m;

  // n×m
  std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x;
      std::cin >> x;

      matrix.at(i).at(j) = x;
    }
  }

  int i_1, i_2, j_1, j_2;
  std::cin >> i_1 >> i_2 >> j_1 >> j_2;

  for (int i = i_1; i <= j_1; i++) {
    for (int j = i_2; j <= j_2; j++) {
      std::cout << matrix.at(i).at(j);
      if (j != j_2) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
