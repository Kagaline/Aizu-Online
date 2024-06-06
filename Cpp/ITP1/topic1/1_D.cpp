#include <iostream>

int main(void)
{
  // 入力は秒.
  int seconds;
  std::cin >> seconds;

  // 秒から時間に変換できるだけ変換する.
  int hours = seconds / 3600;

  // 時間に変換した分は取り除く.
  seconds %= 3600;

  // 秒から分に変換できるだけ変換する.
  int minutes = seconds / 60;

  // 分に変換した分は取り除く.
  seconds %= 60;

  std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

  return 0;
}
