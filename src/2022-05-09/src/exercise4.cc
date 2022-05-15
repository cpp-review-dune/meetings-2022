#include <fmt/core.h>

bool es_divisible(unsigned int number)
{
  // 1 significa verdadero, 0 significa falso
  bool flag = number % (2 * 5 * 7) == 0;
  return flag;
}

int main()
{
  int n = 70;
  fmt::print("Is {} divisible by 70? {}.\n", n, es_divisible(n));

  return 0;
}