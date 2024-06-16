#include <iomanip>
#include <iostream>

int main(void) {

  while (true) {

    int height, width;
    std::cin >> height >> width;

    if (height == 0 && width == 0) {
      break;
    }

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        if ((x + y) % 2 == 0) {
          std::cout << "#";
        } else {
          std::cout << ".";
        }
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }

  return 0;
}
