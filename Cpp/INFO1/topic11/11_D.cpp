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
  int n;
  std::cin >> n;

  // 行の最後まで読み込む必要がある.
  std::string tmp;
  std::getline(std::cin, tmp, '\n');

  // n行に対して行う.
  for (int i = 0; i < n; i++)
  {
    // 標準入力から読み込む.
    std::string input_line;
    std::getline(std::cin, input_line, '\n');

    // 空白で区切る -> 文字列を配列に入れる.
    std::vector<std::string> words;
    std::string word;
    std::stringstream ss_input_line(input_line);
    while (std::getline(ss_input_line, word, ' '))
    {
      if (word != " " && word != "")
      {
        words.push_back(word);
      }
    }

    // 配列に格納されている文字列を空白区切りで出力する.
    for (auto itr = words.end() - 1; itr != words.begin() - 1; itr--)
    {
      std::cout << *itr;
      if (itr != words.begin())
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
