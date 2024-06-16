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

  int n, m, q;
  std::cin >> n >> m >> q;

  // n×m
  std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));

  for (int i = 0; i < q; i++) {

    int r_first, r_last, c_first, c_last;
    std::cin >> r_first >> c_first >> r_last >> c_last;

    for (int r = r_first; r <= r_last; r++) {
      for (int c = c_first; c <= c_last; c++) {
        matrix.at(r).at(c) += 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {

      std::cout << matrix.at(i).at(j);

      if (j != m - 1) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
