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
std::vector<int> update_array(std::vector<int> array_, int c);

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> vec;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }
  print_array(vec);

  int k;
  std::cin >> k;

  std::vector<int> b_array = update_array(vec, k);
  print_array(b_array);

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
  std::cout << ")" << std::endl;
}

std::vector<int> update_array(std::vector<int> vec, int c) {
  std::vector<int> result_vec;
  for (auto itr = vec.begin(); itr != vec.end(); itr++) {
    result_vec.push_back(*itr * c);
  }

  return result_vec;
}
