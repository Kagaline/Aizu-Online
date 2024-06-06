#include <iomanip>
#include <iostream>
#include <vector>

int main(void)
{
  const int num_buildings = 4;
  const int num_floors = 3;
  const int num_rooms = 10;

  int n;
  std::cin >> n;

  int tenants[num_buildings][num_floors][num_rooms] = {0};

  for (int i = 0; i < n; ++i)
  {
    int building, floor, room, value;

    std::cin >> building >> floor >> room >> value;
    tenants[building - 1][floor - 1][room - 1] += value;
  }

  for (int b = 0; b < num_buildings; ++b)
  {
    for (int f = 0; f < num_floors; ++f)
    {
      for (int r = 0; r < num_rooms; ++r)
      {
        std::cout << " " << tenants[b][f][r];
      }
      std::cout << std::endl;
    }
    if (b != (num_buildings - 1))
    {
      std::cout << "####################" << std::endl;
    }
  }

  return 0;
}
