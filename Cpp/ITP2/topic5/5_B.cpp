#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<std::tuple<int, int, char, long int, std::string>> products;

  for (int i = 0; i < n; i++)
  {
    int value, weight;
    char type;
    long int time;
    std::string name;

    std::cin >> value >> weight >> type >> time >> name;
    std::tuple<int, int, char, long int, std::string> a_product{value, weight, type, time, name};

    products.push_back(a_product);
  }

  std::sort(products.begin(), products.end());

  for (auto itr = products.begin(); itr != products.end(); itr++)
  {
    int value = std::get<0>(*itr);
    int weight = std::get<1>(*itr);
    char type = std::get<2>(*itr);
    long int time = std::get<3>(*itr);
    std::string name = std::get<4>(*itr);

    std::cout << value << " " << weight << " " << type << " " << time << " " << name << std::endl;
  }

  return 0;
}
