#include <iomanip>
#include <iostream>
#include <vector>

int main(void) {

  // 問題から与えられた定数.
  constexpr int BUILDINGS               = 4 + 1;
  constexpr int FLOORS                  = 3 + 1;
  constexpr int ROOMS                   = 10 + 1;
  int tenants[BUILDINGS][FLOORS][ROOMS] = {0};

  int n;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    int building, floor, room, value;
    std::cin >> building >> floor >> room >> value;
    tenants[building][floor][room] += value;
  }

  for (int b = 1; b < BUILDINGS; ++b) {
    for (int f = 1; f < FLOORS; ++f) {
      for (int r = 1; r < ROOMS; ++r) {
        std::cout << " " << tenants[b][f][r];
      }
      std::cout << std::endl;
    }
    if (b != BUILDINGS - 1) {
      std::cout << "####################" << std::endl;
    }
  }

  return 0;
}
