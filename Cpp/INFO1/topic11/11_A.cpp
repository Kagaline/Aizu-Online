#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void) {

  std::vector<std::string> words;

  std::string input_word;
  while (std::cin >> input_word) {
    words.push_back(input_word);
  }

  for (auto itr = words.begin(); itr != words.end(); itr++) {
    std::cout << *itr << std::endl;
  }

  return 0;
}
