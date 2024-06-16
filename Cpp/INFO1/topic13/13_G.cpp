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
std::vector<int> addition(std::vector<int> vec_a, std::vector<int> vec_b);

int main(void) {
  int n;
  std::cin >> n;

  std::vector<int> a_array;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    a_array.push_back(x);
  }

  std::vector<int> b_array;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    b_array.push_back(x);
  }

  std::vector<int> c_array = addition(a_array, b_array);

  print_array(a_array);
  print_array(b_array);
  print_array(c_array);

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

std::vector<int> addition(std::vector<int> vec_a, std::vector<int> vec_b) {
  std::vector<int> c;
  for (auto itr_a = vec_a.begin(), itr_b = vec_b.begin();
       itr_a != vec_a.end() && itr_b != vec_b.end(); itr_a++, itr_b++) {
    c.push_back(*itr_a + *itr_b);
  }

  return c;
}
