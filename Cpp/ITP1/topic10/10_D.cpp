#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

double calc_miconfsky_distance(std::vector<double>& x, std::vector<double>& y, double p);

int main(void) {

  int n;
  std::cin >> n;

  std::vector<double> x(n, 0);
  for (auto& _x : x) {
    std::cin >> _x;
  }

  std::vector<double> y(n, 0);
  for (auto& _y : y) {
    std::cin >> _y;
  }

  // p == 1
  double dis_1 = calc_miconfsky_distance(x, y, 1.0);

  // p == 2
  double dis_2 = calc_miconfsky_distance(x, y, 2.0);

  // p == 3
  double dis_3 = calc_miconfsky_distance(x, y, 3.0);

  // p == inf
  double dis_inf = -10000000000;
  for (int i = 0; i < n; ++i) {
    double distance = std::abs(x.at(i) - y.at(i));
    if (dis_inf < distance) {
      dis_inf = distance;
    }
  }

  std::cout << std::fixed << std::setprecision(15) << dis_1 << "\n"
            << dis_2 << "\n"
            << dis_3 << "\n"
            << dis_inf << std::endl;
  return 0;
}

double calc_miconfsky_distance(std::vector<double>& x, std::vector<double>& y, double p) {
  // p == p
  int array_length = x.size();

  double dis_p = 0;
  for (int i = 0; i < array_length; ++i) {
    double absolute_distance = std::abs(x.at(i) - y.at(i));
    dis_p += std::pow(absolute_distance, p);
  }
  dis_p = std::pow(dis_p, 1 / p);

  return dis_p;
}
