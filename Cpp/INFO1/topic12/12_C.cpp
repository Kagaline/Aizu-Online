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
  std::vector<std::vector<bool>> matrix(n, std::vector<bool>(m, false));

  for (int i = 0; i < q; i++) {

    int x, y;
    std::cin >> x >> y;

    matrix.at(x).at(y).flip();
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
