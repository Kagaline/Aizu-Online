#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int word_frequency = 0;

  std::string word;
  std::cin >> word;

  while (true) {
    std::string text;
    std::cin >> text;

    if (text == "END_OF_TEXT") {
      break;
    }

    for (int i = 0; i < text.size(); i++) {
      text.at(i) = std::tolower(text.at(i));
    }

    if (text == word) {
      word_frequency++;
    }
  }

  std::cout << word_frequency << std::endl;
  return 0;
}
