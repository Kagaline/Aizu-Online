#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  while (true) {
    int num_students;
    std::cin >> num_students;

    if (num_students == 0) {
      break;
    }

    std::vector<double> scores(num_students, 0);
    for (auto &x : scores) {
      std::cin >> x;
    }

    // 合計.
    double sum_of_score = 0;
    for (int i = 0; i < num_students; i++) {
      sum_of_score += scores.at(i);
    }

    // 平均.
    double mean_score = sum_of_score / num_students;

    // 分散.
    double distribution_of_score = 0;
    for (int i = 0; i < num_students; i++) {
      distribution_of_score += std::pow(scores.at(i) - mean_score, 2);
    }
    distribution_of_score /= num_students;

    // 標準偏差.
    double standard_distribution_of_score = std::sqrt(distribution_of_score);

    std::cout << std::fixed << std::setprecision(15) << standard_distribution_of_score
              << std::endl;
  }
  return 0;
}
