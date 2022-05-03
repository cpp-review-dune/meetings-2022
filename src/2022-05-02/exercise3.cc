#include <cmath>

#include <fmt/core.h>
#include <fmt/color.h>

int main()
{
  auto x = 6.5, y = 3.8;
  auto expr1 = [](auto x, auto y)
  {
    return pow(pow(x, 2) + pow(y, 2), 2. / 3) +
           (x * y) / (y - x);
  };
  auto resultado_a = expr1(x, y);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::light_green),
             "(x^2 + y^2)^2/3 + (x*y)/(y - x) = {0:.2f}\n", resultado_a);

  auto expr2 = [](auto x, auto y)
  {
    return sqrt(x + y) / pow(x - y, 2) + 2 * pow(x, 2) -
           x * pow(y, 2);
  };
  auto resultado_b = expr2(x, y);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::blue_violet),
             "sqrt(x+y)/(x-y)^2+ 2*x^2 - x*y^2 = {0:.2f}\n", resultado_b);

  return 0;
}
