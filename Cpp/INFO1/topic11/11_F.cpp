#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

// 配列に格納されている文字列を空白区切りで出力する.
template <typename T>
void print_all_elements(std::vector<T> &vec);

int main(void) {

  // 1行ごとに読み込む.
  std::string input_line;
  std::getline(std::cin, input_line);

  // 標準入力化.
  std::stringstream ss(input_line);

  int n;
  ss >> n;

  for (int i = 1; i <= n; i++) {
    // 1行ごとに読み込む.
    std::string input_line;
    std::getline(std::cin, input_line);

    // 標準入力化.
    std::stringstream ss(input_line);

    // 空白区切りで配列に格納する.
    std::vector<int> vec;

    int x;
    while (ss >> x) {
      vec.push_back(x + i);
    }

    // 出力する.
    print_all_elements(vec);
  }

  return 0;
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
