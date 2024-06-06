#include <iomanip>
#include <iostream>
#include <vector>

struct Student_Scores
{
  int mid_exam;
  int final_exam;
  int re_exam;
};

char judge(Student_Scores student_score)
{
  int mid_score = student_score.mid_exam;
  int fin_score = student_score.final_exam;
  int re_score = student_score.re_exam;

  char result = '!';

  // 合計点による成績.
  if ((mid_score + fin_score) >= 80)
  {
    result = 'A';
  }
  else if ((mid_score + fin_score) >= 65)
  {
    result = 'B';
  }
  else if ((mid_score + fin_score) >= 50)
  {
    result = 'C';
  }
  else if ((mid_score + fin_score) >= 30)
  {
    result = 'D';

    // 再試験の成績がいい場合の特例措置.
    if (re_score >= 50)
    {
      result = 'C';
    }
  }
  else
  {
    result = 'F';
  }

  // どちらかを欠席した場合.
  if (mid_score == -1 || fin_score == -1)
  {
    result = 'F';
  }

  return result;
}

int main(void)
{
  std::vector<Student_Scores> students;

  while (true)
  {
    int m, f, r;
    std::cin >> m >> f >> r;

    // 終了条件.
    if (m == -1 && f == -1 && r == -1)
    {
      break;
    }

    Student_Scores student = {m, f, r};
    students.push_back(student);
  }

  for (int i = 0; i < students.size(); i++)
  {
    std::cout << judge(students.at(i)) << std::endl;
  }
  return 0;
}
