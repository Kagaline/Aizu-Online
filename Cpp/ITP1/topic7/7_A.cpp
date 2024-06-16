#include <iomanip>
#include <iostream>
#include <vector>

class Student_Scores {
private:
  int mid_;
  int final_;
  int re_;
  char grade_;

  // 成績をつける.
  void set_grade();

public:
  Student_Scores(int mid_exam_score, int final_exam_score, int re_exam_score) {
    mid_   = mid_exam_score;
    final_ = final_exam_score;
    re_    = re_exam_score;
    set_grade();
  };

  char get_grade() {
    return grade_;
  };
};

void Student_Scores::set_grade() {

  // 合計点による成績.
  if ((mid_ + final_) >= 80) {
    grade_ = 'A';
  } else if ((mid_ + final_) >= 65) {
    grade_ = 'B';
  } else if ((mid_ + final_) >= 50) {
    grade_ = 'C';
  } else if ((mid_ + final_) >= 30) {
    grade_ = 'D';
    if (re_ >= 50) {
      grade_ = 'C'; // 再試験の成績がいい場合の特例措置.
    }
  } else {
    grade_ = 'F';
  }

  // どちらかを欠席した場合.
  if (mid_ == -1 || final_ == -1) {
    grade_ = 'F';
  }
};

int main(void) {

  std::vector<Student_Scores> students;

  while (true) {

    int mid_exam_score, final_exam_score, re_exam_score;
    std::cin >> mid_exam_score >> final_exam_score >> re_exam_score;

    // 終了条件.
    if (mid_exam_score == -1 && final_exam_score == -1 && re_exam_score == -1) {
      break;
    }

    Student_Scores student = {mid_exam_score, final_exam_score, re_exam_score};
    students.push_back(student);
  }

  for (int i = 0; i < students.size(); i++) {
    std::cout << students.at(i).get_grade() << std::endl;
  }
  return 0;
}
