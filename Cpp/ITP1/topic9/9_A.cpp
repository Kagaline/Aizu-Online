#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int word_counter = 0;

  std::string word;
  std::cin >> word;

  while (true)
  {
    std::string Text;
    std::cin >> Text;

    if (Text == "END_OF_TEXT")
    {
      break;
    }

    for (int i = 0; i < Text.size(); i++)
    {
      Text.at(i) = std::tolower(Text.at(i));
    }

    if (Text == word)
    {
      word_counter++;
    };
  }

  std::cout << word_counter << std::endl;
  return 0;
}
