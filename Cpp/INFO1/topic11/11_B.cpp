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

  // 逆方向に出力.
  for (auto reverse_itr = words.rbegin(); reverse_itr != words.rend(); reverse_itr++) {
    std::cout << *reverse_itr << std::endl;
  }

  return 0;
}
