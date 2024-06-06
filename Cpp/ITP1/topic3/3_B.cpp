#include <iostream>

int main(void)
{
  int x;

  int case_counter = 1;
  while (true)
  {
    std::cin >> x;

    if (x == 0)
    {
      break;
    }

    std::cout << "Case " << case_counter << ": " << x << std::endl;
    case_counter++;
  }

  return 0;
}
