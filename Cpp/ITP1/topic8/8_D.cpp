#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  std::string s, p;
  std::cin >> s >> p;

  std::string ring_s = s + s; // 文字列繰り返す.

  // pが存在するか.
  std::string answer = (ring_s.find(p) != std::string::npos) ? "Yes" : "No";
  std::cout << answer << std::endl;

  return 0;
}
