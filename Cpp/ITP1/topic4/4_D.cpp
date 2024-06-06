#include <iomanip>
#include <iostream>

int main(void)
{
  int n;
  std::cin >> n;

  int max = -1000000;
  int min = 1000000;
  long int sum = 0;

  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;

    if (x < min)
    {
      min = x;
    }

    if (x > max)
    {
      max = x;
    }

    sum += x;
  }

  std::cout << min << " " << max << " " << sum << std::endl;

  return 0;
}
