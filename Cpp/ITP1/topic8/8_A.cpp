#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  std::string input;
  std::getline(std::cin, input);

  for (auto itr = input.begin(); itr != input.end(); ++itr) {
    if (std::islower(*itr)) {
      *itr = std::toupper(*itr);
    } else if (std::isupper(*itr)) {
      *itr = std::tolower(*itr);
    }
  }

  std::cout << input << std::endl;
  return 0;
}
