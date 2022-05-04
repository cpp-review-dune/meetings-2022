#include <fmt/ranges.h>
#include <iostream>
#include <vector>

std::vector<double> range(double min, double max, std::size_t N)
{
  std::vector<double> range;
  double delta = (max - min) / double(N - 1);
  for (int i = 0; i < N; i++)
  {
    range.push_back(min + i * delta);
  }
  return range;
}

int main()
{
  using MyDVector = std::vector<double>;

  std::vector<int> v1 = {1, 2, 3, 4};
  fmt::print("{}\n", v1);

  std::vector<int> v2;
  v2 = std::vector<int>(v1.begin() + 1, v1.end() - 1);
  fmt::print("{}\n", v2);

  MyDVector u1 = range(1, 2, 100);
  fmt::print("{}\n", u1);

  MyDVector u2 = range(1., 21., 20);
  fmt::print("{}\n", u2);

  return 0;
}