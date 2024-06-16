#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  while (true) {

    std::string number;
    std::cin >> number;

    if (number == "0") {
      break;
    }

    int sum_of_numbers = 0;
    for (auto x : number) {
      sum_of_numbers += x - '0'; // xはchar型になっているので, '0'を引いて数値と同じにする.
    }
    std::cout << sum_of_numbers << std::endl;
  }
  return 0;
}
