#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

bool is_prime(int x)
{
  bool is_prime = true;

  if (x == 2)
  {
    return true;
  }
  else if (x % 2 == 0)
  {
    return false;
  }
  else if (x == 3)
  {
    return true;
  }

  //
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      is_prime = false;
    }
  }

  return is_prime;
}

int main(void)
{
  int n;
  std::cin >> n;

  int num_primes = 0;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    if (is_prime(x))
    {
      num_primes++;
    }
  }

  std::cout << num_primes << std::endl;
  return 0;
}
