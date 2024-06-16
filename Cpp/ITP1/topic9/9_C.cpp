#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int n;
  std::cin >> n;

  int tarou_score  = 0;
  int hanako_score = 0;

  for (int i = 0; i < n; i++) {
    std::string tarou_card, hanako_card;
    std::cin >> tarou_card >> hanako_card;

    if (tarou_card < hanako_card) {
      hanako_score += 3;
    } else if (tarou_card == hanako_card) {
      tarou_score += 1;
      hanako_score += 1;
    } else if (tarou_card > hanako_card) {
      tarou_score += 3;
    }
  }

  std::cout << tarou_score << " " << hanako_score << std::endl;

  return 0;
}
