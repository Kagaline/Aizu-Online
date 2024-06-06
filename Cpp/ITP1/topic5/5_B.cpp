#include <iomanip>
#include <iostream>

int main(void)
{
  int H, W;

  while (true)
  {
    std::cin >> H >> W;

    if (H == 0 && W == 0)
    {
      break;
    }

    for (int y = 0; y < H; ++y)
    {
      for (int x = 0; x < W; ++x)
      {
        if (x == 0 || x == (W - 1) || y == 0 || y == (H - 1))
        {
          std::cout << "#";
        }
        else
        {
          std::cout << ".";
        }
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }

  return 0;
}
