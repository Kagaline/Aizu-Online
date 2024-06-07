#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  while (true)
  {
    int n;
    std::cin >> n;

    if (n == 0)
    {
      break;
    }

    std::vector<double> scores;
    for (int i = 0; i < n; ++i)
    {
      double x;
      std::cin >> x;
      scores.push_back(x);
    }

    double sum = 0;
    double mean = 0;
    double dis = 0;
    double st_dis = 0;

    for (int i = 0; i < n; i++)
    {
      sum += scores.at(i);
    }
    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
      dis += std::pow(scores.at(i) - mean, 2);
    }
    dis /= n;

    st_dis = std::sqrt(dis);

    std::cout << std::fixed << std::setprecision(15) << st_dis << std::endl;
  }
  return 0;
}
