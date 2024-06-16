#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

template <typename T>
void print_all(std::vector<T> &vec);

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec) {
    std::cin >> x;
  }

  int begin, end;
  std::cin >> begin >> end;

  const auto begin_itr = vec.begin() + begin;
  const auto end_itr   = vec.begin() + end + 1;
  std::reverse(begin_itr, end_itr);

  print_all(vec);

  return 0;
}

template <typename T>
void print_all(std::vector<T> &vec) {
  for (auto itr = vec.begin(); itr != vec.end(); itr++) {
    std::cout << *itr;
    if (itr != vec.end() - 1) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}
