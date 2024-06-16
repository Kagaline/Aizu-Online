#include <cctype>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(void) {

  std::map<char, int> alphabet_dict;
  for (char letter = 'a'; letter <= 'z'; ++letter) {
    alphabet_dict[letter] = 0;
  }

  std::string s;

  while (std::getline(std::cin, s)) {
    for (auto x : s) {
      if (std::isupper(x)) {
        x = std::tolower(x);
      }
      alphabet_dict[x] += 1;
    }
  }

  for (auto itr = alphabet_dict.begin(); itr != alphabet_dict.end(); ++itr) {
    std::cout << (*itr).first << " : " << (*itr).second << std::endl;
  }
  return 0;
}
