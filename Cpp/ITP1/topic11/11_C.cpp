#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

class Dice {
private:
  int A_; // above.
  int B_; // bottom.
  int N_; // north.
  int E_; // east.
  int W_; // west.
  int S_; // south.

public:
  Dice(int a, int s, int e, int w, int n, int b);
  ~Dice();

  // is_same.
  bool check_all_aspect_is_same(Dice other);
  bool is_same(Dice other);

  // getter.
  int get_above(void);
  int get_bottom(void);
  int get_north(void);
  int get_east(void);
  int get_west(void);
  int get_south(void);

  // 動かし方.
  void move_n(void);
  void move_e(void);
  void move_w(void);
  void move_s(void);
  void turn_nwse(void);
  void turn_nesw(void);

  void read_instructions(std::string instruction);
  void set_perspective(int above, int south);
};

// constructor.
Dice::Dice(int a, int s, int e, int w, int n, int b) : A_(a), B_(b), N_(n), E_(e), W_(w), S_(s) {}

// deathtructor.
Dice::~Dice() {}

// rotation.
void Dice::move_n(void) {
  int tmp = A_;
  A_      = S_;
  S_      = B_;
  B_      = N_;
  N_      = tmp;
}
void Dice::move_e(void) {
  int tmp = A_;
  A_      = W_;
  W_      = B_;
  B_      = E_;
  E_      = tmp;
}
void Dice::move_w(void) {
  int tmp = A_;
  A_      = E_;
  E_      = B_;
  B_      = W_;
  W_      = tmp;
}
void Dice::move_s(void) {
  int tmp = A_;
  A_      = N_;
  N_      = B_;
  B_      = S_;
  S_      = tmp;
}
void Dice::turn_nesw(void) {
  int tmp = N_;
  N_      = E_;
  E_      = S_;
  S_      = W_;
  W_      = tmp;
}
void Dice::turn_nwse(void) {
  int tmp = N_;
  N_      = W_;
  W_      = S_;
  S_      = E_;
  E_      = tmp;
}

// getter.
int Dice::get_above(void) {
  return A_;
}
int Dice::get_bottom(void) {
  return B_;
}
int Dice::get_north(void) {
  return N_;
}
int Dice::get_east(void) {
  return E_;
}
int Dice::get_west(void) {
  return W_;
}
int Dice::get_south(void) {
  return S_;
}

bool Dice::check_all_aspect_is_same(Dice other) {

  bool all_aspect_is_same =
      (A_ == other.get_above() && B_ == other.get_bottom() && N_ == other.get_north() &&
       E_ == other.get_east() && W_ == other.get_west() && S_ == other.get_south());

  return all_aspect_is_same;
}

// is_same.
bool Dice::is_same(Dice other) {

  // 向きを全列挙する -> 同じものがないか探す.
  bool result = false;

  // *S起点.
  // Sを正面にセット.
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.

  // *N起点.
  // Nを正面にセット.
  move_s();
  move_s();
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.
  move_n();
  move_n();

  // *A起点.
  // Aを正面にセット.
  move_s();
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.
  move_n();

  // *B起点.
  // Bを正面にセット.
  move_n();
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.
  move_s();

  // *E起点.
  // Eを正面にセット.
  turn_nesw();
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.
  turn_nwse();

  // *W起点.
  // Wを正面にセット.
  turn_nwse();
  // 探索.
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  result = check_all_aspect_is_same(other) || result;
  move_e();
  // 元に戻す.
  turn_nesw();

  return result;
}

// sequencial movements.
void Dice::read_instructions(std::string instructions) {
  for (auto &x : instructions) {
    if (x == 'N') {
      move_n();
    } else if (x == 'E') {
      move_e();
    } else if (x == 'W') {
      move_w();
    } else if (x == 'S') {
      move_s();
    }
  }
}

void Dice::set_perspective(int above, int south) {
  // 前面を合わせる.
  if (south == A_) {
    move_s();
  } else if (south == N_) {
    move_s();
    move_s();
  } else if (south == E_) {
    move_w();
    move_s();
  } else if (south == W_) {
    move_e();
    move_s();
  } else if (south == B_) {
    move_n();
  }

  // 上面も合わせる.
  while (above != A_) {
    move_e();
  }
}

int main(void) {
  int a, s, e, w, n, b;
  std::cin >> a >> s >> e >> w >> n >> b;
  Dice dice1(a, s, e, w, n, b);

  std::cin >> a >> s >> e >> w >> n >> b;
  Dice dice2(a, s, e, w, n, b);

  if (dice1.is_same(dice2)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
