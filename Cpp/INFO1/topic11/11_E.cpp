#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void) {
  // 入力列を読み込む.
  std::string input_stream;
  std::getline(std::cin, input_stream);

  // 読み込んだ文字列を再び標準入力からの文字列とする.
  std::stringstream ss_input(input_stream);

  // 空白区切りの数値に加工して出力する.
  int x;
  while (ss_input >> x) {
    std::cout << x + 1 << std::endl;
  }

  return 0;
}
