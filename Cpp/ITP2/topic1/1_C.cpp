#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

/* iteratorの振る舞いがよくわかっていない. */

int main(void)
{
  std::list<int> lst = {};
  auto cursor = lst.end();

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    // insert.
    if (op == 0)
    {
      int x;
      std::cin >> x;
      lst.insert(cursor, x);
      cursor--;
    }

    // move.
    else if (op == 1)
    {
      int d;
      std::cin >> d;
      if (d > 0)
      {
        for (int j = 0; j < d; j++)
        {
          cursor++;
        }
      }
      else if (d < 0)
      {
        for (int j = 0; j < (-1) * d; j++)
        {
          cursor--;
        }
      }
    }

    // erase.
    else if (op == 2)
    {
      auto c_cursor = cursor;
      c_cursor++;
      lst.erase(cursor);
      cursor = c_cursor;
    }
  }

  // output.
  for (auto itr = lst.begin(); itr != lst.end(); itr++)
  {
    std::cout << *itr << std::endl;
  }

  return 0;
}
