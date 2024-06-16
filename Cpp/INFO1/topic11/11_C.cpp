#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

// 入力文字列を空白で区切り、結果の集合をベクトル配列で出力する.
std::vector<std::string> split_by_space(std::string &input_str);

// 配列に格納されている文字列を空白区切りで出力する.
template <typename T>
void print_all_elements(std::vector<T> &vec);

int main(void) {

  int n;
  std::cin >> n;

  // 行の最後まで読み込む必要がある.
  std::string tmp;
  std::getline(std::cin, tmp, '\n');

  for (int i = 0; i < n; i++) {

    std::string input_line;
    std::getline(std::cin, input_line, '\n');

    std::vector<std::string> words_vec = split_by_space(input_line);

    print_all_elements(words_vec);
  }

  return 0;
}

// 入力文字列を空白で区切り、結果の集合をベクトル配列で出力する.
std::vector<std::string> split_by_space(std::string &input_str) {

  std::vector<std::string> words_vec;

  std::string word;
  std::stringstream ss_input_string(input_str); // 空白で区切るために型を変換する.

  while (std::getline(ss_input_string, word, ' ')) {
    if (word != " " && word != "") {
      words_vec.push_back(word);
    }
  }

  return words_vec;
}

// 配列に格納されている文字列を空白区切りで出力する.
template <typename T>
void print_all_elements(std::vector<T> &vec) {

  for (auto itr = vec.begin(); itr != vec.end(); itr++) {
    std::cout << *itr;
    if (itr != (vec.end() - 1)) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}
