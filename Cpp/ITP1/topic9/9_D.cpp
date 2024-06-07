#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  std::string str;
  std::cin >> str;

  int queries;
  std::cin >> queries;

  for (int i = 0; i < queries; ++i)
  {
    std::string op;
    int a, b;
    std::cin >> op >> a >> b;

    auto a_begin_itr = str.begin() + a;
    auto b_end_itr = str.begin() + b + 1;

    if (op == "print")
    {
      for (auto itr = a_begin_itr; itr != b_end_itr; ++itr)
      {
        std::cout << *itr;
      }
      std::cout << std::endl;
    }
    else if (op == "reverse")
    {
      std::reverse(a_begin_itr, b_end_itr);
    }
    else if (op == "replace")
    {
      std::string p;
      std::cin >> p;

      auto p_itr = p.begin();
      for (auto itr = a_begin_itr; itr != b_end_itr; ++itr, ++p_itr)
      {
        *itr = *p_itr;
      }
    }
  }

  return 0;
}
