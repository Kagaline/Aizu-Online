#include <iostream>

int main(void) {

  int a, b, c;
  std::cin >> a >> b >> c;

  int n_of_c_factor = 0;

  for (int x = a; x <= b; ++x) {
    if (c % x == 0) {
      n_of_c_factor++;
    }
  }

  std::cout << n_of_c_factor << std::endl;

  return 0;
}
