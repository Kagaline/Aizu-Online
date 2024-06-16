#include <iomanip>
#include <iostream>
#include <vector>

int main(void) {

  int num_rows, num_cols;
  std::cin >> num_rows >> num_cols;

  std::vector<std::vector<int>> sheet(num_rows + 1, std::vector<int>(num_cols + 1, 0));

  for (int i = 0; i < num_rows; ++i) {
    for (int j = 0; j < num_cols; ++j) {
      int x;
      std::cin >> x;

      sheet.at(i).at(j) = x;                // セルに代入.
      sheet.at(i).at(num_cols) += x;        // 行の合計に加算する.
      sheet.at(num_rows).at(j) += x;        // 列の合計に加算する.
      sheet.at(num_rows).at(num_cols) += x; // 表の合計に加算する.
    }
  }

  for (int i = 0; i <= num_rows; ++i) {
    for (int j = 0; j <= num_cols; ++j) {

      std::cout << sheet.at(i).at(j);

      if (j != num_cols) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
