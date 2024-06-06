#include <iomanip>
#include <iostream>

int main(void)
{
  const double PI = 3.141592653589;

  double r;
  std::cin >> r;

  std::cout << std::fixed << std::setprecision(15);
  std::cout << PI * r * r << " ";
  std::cout << 2 * PI * r << std::endl;

  return 0;
}
