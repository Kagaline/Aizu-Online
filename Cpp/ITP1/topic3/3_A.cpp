#include <iostream>

int main(void) {

  // 問題から指定されている繰り返しの回数.
  constexpr int N_REPETITION = 1000;

  for (int i = 0; i < N_REPETITION; ++i) {
    std::cout << "Hello World" << std::endl;
  }

  return 0;
}
