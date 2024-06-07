#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  while (true)
  {
    // 1回文のケース.
    std::string input;
    std::cin >> input;

    if (input == "-")
    {
      break;
    }

    int m;
    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
      int h;
      std::cin >> h;

      std::string tmp = input.substr(h, input.size() - h) + input.substr(0, h);

      input = tmp;
    }

    std::cout << input << std::endl;
  }
  return 0;
}
