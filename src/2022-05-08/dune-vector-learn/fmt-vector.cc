#include <fmt/ranges.h>
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v{};

  for (int i = 0; i < 100; i++)
    v.push_back(i);

  fmt::print("Primera forma sin iterador:\n{}\n", v);

  for (int i = 0; i < v.size(); i++)
    v[i] *= 2;

  fmt::print("Segunda forma con iterador:\n");

  std::vector<int>::iterator iter = v.begin();
  while (iter != v.end())
  {
    std::cout << *iter << std::endl;
    iter++;
  }
}