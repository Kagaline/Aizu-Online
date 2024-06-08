#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
  std::string input_line;
  std::getline(std::cin, input_line);

  std::stringstream ss(input_line);
  int n;
  ss >> n;

  for (int i = 1; i <= n; i++)
  {
    // 1行ごとに読み込む.
    std::string input_line;
    std::getline(std::cin, input_line);

    // 標準入力化.
    std::stringstream ss(input_line);

    // 空白区切りで配列に格納する.
    std::vector<int> vec;
    int x;
    while (ss >> x)
    {
      vec.push_back(x);
    }

    // 出力する.
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
      std::cout << *itr + i;
      if (itr != (vec.end() - 1))
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
