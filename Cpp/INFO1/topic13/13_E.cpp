#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

void print_array(std::vector<int> vec);
std::vector<int> generate_array(int n);

int main(void) {
  int n;
  std::cin >> n;

  std::vector<int> array_ = generate_array(n);

  print_array(array_);

  return 0;
}

void print_array(std::vector<int> vec) {
  std::cout << "(";
  for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
    std::cout << *itr;
    if (itr != vec.end() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << ")";
  std::cout << std::endl;
}

std::vector<int> generate_array(int n) {
  std::vector<int> vec;
  for (int i = 0; i < n; i++) {
    vec.push_back(i);
  }

  return vec;
}
