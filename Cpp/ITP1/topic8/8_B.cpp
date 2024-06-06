#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  std::string number;
  while (true)
  {
    std::cin >> number;

    if (number == "0")
    {
      break;
    }

    int sum = 0;
    for (auto x : number)
    {
      // xはchar型になっているので, '0'を引いて数値と同じにする.
      sum += x - '0';
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
