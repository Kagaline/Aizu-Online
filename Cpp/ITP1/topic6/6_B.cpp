#include <iomanip>
#include <iostream>
#include <vector>

int main(void) {

  // トランプに書かれる数字 [0,1,...,13].
  constexpr int NUMBERS = 13 + 1;

  std::vector<int> Spade(NUMBERS, 0);
  std::vector<int> Club(NUMBERS, 0);
  std::vector<int> Heart(NUMBERS, 0);
  std::vector<int> Diamond(NUMBERS, 0);

  int n;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    char sort;
    int num;
    std::cin >> sort >> num;

    if (sort == 'S') {
      Spade.at(num) = 1;
    } else if (sort == 'H') {
      Heart.at(num) = 1;
    } else if (sort == 'C') {
      Club.at(num) = 1;
    } else if (sort == 'D') {
      Diamond.at(num) = 1;
    }
  }

  for (int i = 1; i < NUMBERS; ++i) {
    if (Spade.at(i) == 0) {
      std::cout << "S " << i << std::endl;
    }
  }

  for (int i = 1; i < NUMBERS; ++i) {
    if (Heart.at(i) == 0) {
      std::cout << "H " << i << std::endl;
    }
  }

  for (int i = 1; i < NUMBERS; ++i) {
    if (Club.at(i) == 0) {
      std::cout << "C " << i << std::endl;
    }
  }

  for (int i = 1; i < NUMBERS; ++i) {
    if (Diamond.at(i) == 0) {
      std::cout << "D " << i << std::endl;
    }
  }

  return 0;
}
