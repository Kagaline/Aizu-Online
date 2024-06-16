#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  while (true) {

    std::string deck;
    std::cin >> deck;

    if (deck == "-") {
      break;
    }

    int shuffling_times;
    std::cin >> shuffling_times;

    for (int i = 0; i < shuffling_times; i++) {
      int h;
      std::cin >> h;

      // shuffling.
      deck = deck.substr(h, deck.size() - h) + deck.substr(0, h);
    }

    // output.
    std::cout << deck << std::endl;
  }
  return 0;
}
