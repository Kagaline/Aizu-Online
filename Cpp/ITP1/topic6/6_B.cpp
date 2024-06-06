#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  const int numbers = 13;

  std::vector<int> Spade(numbers, 0);
  std::vector<int> Club(numbers, 0);
  std::vector<int> Heart(numbers, 0);
  std::vector<int> Diamond(numbers, 0);

  int n;
  std::cin >> n;

  for (int i = 0; i < n; ++i)
  {
    char sort;
    int num;
    std::cin >> sort >> num;

    if (sort == 'S')
    {
      Spade.at(num - 1) = 1;
    }
    else if (sort == 'H')
    {
      Heart.at(num - 1) = 1;
    }
    else if (sort == 'C')
    {
      Club.at(num - 1) = 1;
    }
    else if (sort == 'D')
    {
      Diamond.at(num - 1) = 1;
    }
  }

  for (int i = 0; i < numbers; ++i)
  {
    if (Spade.at(i) == 0)
    {
      std::cout << "S " << i + 1 << std::endl;
    }
  }

  for (int i = 0; i < numbers; ++i)
  {
    if (Heart.at(i) == 0)
    {
      std::cout << "H " << i + 1 << std::endl;
    }
  }
  
  for (int i = 0; i < numbers; ++i)
  {
    if (Club.at(i) == 0)
    {
      std::cout << "C " << i + 1 << std::endl;
    }
  }

  for (int i = 0; i < numbers; ++i)
  {
    if (Diamond.at(i) == 0)
    {
      std::cout << "D " << i + 1 << std::endl;
    }
  }

  return 0;
}
