#include <iomanip>
#include <iostream>

int main(void)
{
  int a, b;
  char op;

  while (true)
  {
    std::cin >> a >> op >> b;

    if (op == '?')
    {
      break;
    }

    if (op == '+')
    {
      std::cout << a + b << std::endl;
    }

    if (op == '-')
    {
      std::cout << a - b << std::endl;
    }

    if (op == '*')
    {
      std::cout << a * b << std::endl;
    }

    if (op == '/')
    {
      std::cout << a / b << std::endl;
    }
  }
  return 0;
}
