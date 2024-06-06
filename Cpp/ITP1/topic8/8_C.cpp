#include <cctype>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(void)
{
  std::map<char, int> dict;
  for (char letter = 'a'; letter <= 'z'; ++letter)
  {
    dict[letter] = 0;
  }

  std::string s;

  while (std::getline(std::cin, s))
  {
    for (auto x : s)
    {
      if (std::isupper(x))
      {
        x = std::tolower(x);
        dict[x] += 1;
      }
      else if (std::islower(x))
      {
        dict[x] += 1;
      }
    }
  }
  for (auto itr = dict.begin(); itr != dict.end(); ++itr)
  {
    std::cout << (*itr).first << " : " << (*itr).second << std::endl;
  }
  return 0;
}
