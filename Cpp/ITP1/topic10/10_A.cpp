#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

class Point_2D {
private:
  double x_;
  double y_;

public:
  Point_2D(double x, double y);
  ~Point_2D();
  double x(void);
  double y(void);
};

Point_2D::Point_2D(double x, double y) : x_(x), y_(y) {}
Point_2D::~Point_2D() {}
double Point_2D::x(void) {
  return x_;
}
double Point_2D::y(void) {
  return y_;
}

int main(void) {
  double x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;
  Point_2D point1(x1, y1), point2(x2, y2);

  double x_pow  = std::pow((point1.x() - point2.x()), 2);
  double y_pow  = std::pow((point1.y() - point2.y()), 2);
  double result = std::sqrt(x_pow + y_pow);

  std::cout << std::fixed << std::setprecision(15) << result << std::endl;

  return 0;
}
