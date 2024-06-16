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

  int X, Y, Z;
  std::cin >> X >> Y >> Z;

  // (X+1)×(Y+1)×(Z+1)
  std::vector<std::vector<std::vector<int>>> space(
      X + 1, std::vector<std::vector<int>>(Y + 1, std::vector<int>(Z + 1, 0)));

  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    std::cin >> x >> y >> z;
    space.at(x).at(y).at(z) = 1;
  }

  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++) {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << space.at(x).at(y).at(z) << std::endl;
  }

  return 0;
}
