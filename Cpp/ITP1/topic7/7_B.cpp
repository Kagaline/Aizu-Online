#include <iomanip>
#include <iostream>
#include <vector>

struct Pair
{
  int n;
  int x;
};

int find_solutions(Pair pair)
{
  int num_solutions = 0;

  for (int i = 1; i <= pair.n - 2; ++i)
  {
    for (int j = i + 1; j <= pair.n - 1; ++j)
    {
      for (int k = j + 1; k <= pair.n; ++k)
      {
        if (i + j + k == pair.x)
        {
          num_solutions++;
        }
      }
    }
  }

  return num_solutions;
}

int main(void)
{
  std::vector<Pair> cases;

  while (true)
  {
    int n, x;
    std::cin >> n >> x;

    // 終了条件.
    if (n == 0 && x == 0)
    {
      break;
    }

    Pair pair = {n, x};
    cases.push_back(pair);
  }

  for (int i = 0; i < cases.size(); ++i)
  {
    std::cout << find_solutions(cases.at(i)) << std::endl;
  }

  return 0;
}
