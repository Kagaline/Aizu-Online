#include <iostream>

int main(void)
{
  constexpr int N_REPETITION = 1000;

  for (int i = 0; i < N_REPETITION; ++i)
  {
    std::cout << "Hello World" << std::endl;
  }

  return 0;
}
