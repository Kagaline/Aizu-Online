#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> sequence;

  for (int i = 0; i < n; ++i)
  {
    int x;
    std::cin >> x;
    sequence.push_back(x);
  }

  for (int i = n - 1; i >= 0; --i)
  {
    std::cout << sequence.at(i);
    if (i != 0)
    {
      std::cout << " ";
    }
  }

  std::cout << std::endl;

  return 0;
}
