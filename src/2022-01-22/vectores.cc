#include <vector>
#include <iostream>

int main(int argc, char **argv)
{
  auto v = std::vector<float>{1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

  for (const auto &e : v)
  {
    std::cout << e << std::endl;
  }

  return 0;
}
