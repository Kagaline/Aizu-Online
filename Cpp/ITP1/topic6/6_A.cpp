#include <iomanip>
#include <iostream>
#include <vector>

int main(void) {

  int n;
  std::cin >> n;

  std::vector<int> sequence(n, 0);
  for (auto &x : sequence) {
    std::cin >> x;
  }

  for (auto itr = sequence.rbegin(); itr != sequence.rend(); itr++) {
    std::cout << *itr;
    if (itr != (sequence.rend() - 1)) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
