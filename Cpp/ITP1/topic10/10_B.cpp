#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

// 円周率.
const double PI = std::acos(-1);

class Triangle {
private:
  double a_;
  double b_;
  double rad_;

public:
  Triangle(double a, double b, double c);
  ~Triangle();
  double get_area(void);
  double get_perimeter(void);
  double get_height(void);
};

Triangle::Triangle(double a, double b, double c) : a_(a), b_(b), rad_(c) {}
Triangle::~Triangle() {}
double Triangle::get_area() {
  return a_ * b_ * std::sin(rad_) / 2;
}
double Triangle::get_perimeter() {
  double c_ = std::sqrt(a_ * a_ + b_ * b_ - 2 * a_ * b_ * std::cos(rad_));
  return a_ + b_ + c_;
}
double Triangle::get_height() {
  return b_ * std::sin(rad_);
}

int main(void) {
  int a, b, c;
  std::cin >> a >> b >> c;

  double rad = c * PI / 180;
  Triangle tri(a, b, rad);

  std::cout << std::fixed << std::setprecision(15) << tri.get_area() << "\n"
            << tri.get_perimeter() << "\n"
            << tri.get_height() << std::endl;

  return 0;
}
