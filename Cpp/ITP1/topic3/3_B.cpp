#include <iostream>

int main(void) {

  int case_counter = 1;

  while (true) {

    int x;
    std::cin >> x;

    if (x == 0) {
      break;
    }

    std::cout << "Case " << case_counter << ": " << x << std::endl;
    case_counter++;
  }

  return 0;
}
