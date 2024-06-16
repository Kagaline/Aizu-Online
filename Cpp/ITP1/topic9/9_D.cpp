#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  std::string str;
  std::cin >> str;

  int num_queries;
  std::cin >> num_queries;

  for (int i = 0; i < num_queries; ++i) {
    std::string op;
    int a, b;
    std::cin >> op >> a >> b;

    auto begin_itr = str.begin() + a;
    auto end_itr   = str.begin() + b + 1;

    if (op == "print") {
      for (auto itr = begin_itr; itr != end_itr; ++itr) {
        std::cout << *itr;
      }
      std::cout << std::endl;
    } else if (op == "reverse") {
      std::reverse(begin_itr, end_itr);
    } else if (op == "replace") {
      std::string p;
      std::cin >> p;

      auto p_itr = p.begin();
      for (auto itr = begin_itr; itr != end_itr; ++itr, ++p_itr) {
        *itr = *p_itr;
      }
    }
  }

  return 0;
}
