#include <cmath>
#include <fmt/core.h>
#include <fmt/color.h>

int main()
{
  float x = 6.5, y = 3.8;
  auto expr1 = [](float x, float y)
  {
    return pow(pow(x, 2) + pow(y, 2), 2. / 3) +
           (x * y) / (y - x);
  };
  double resultado_a = expr1(x, y);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::light_green),
             "(x² + y²) ^ ⅔ + (x * y) / (y - x) = {0:.2f}\n",
             resultado_a);

  auto expr2 = [](float x, float y)
  {
    return sqrt(x + y) / pow(x - y, 2) + 2 * pow(x, 2) -
           x * pow(y, 2);
  };
  double resultado_b = expr2(x, y);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::blue_violet),
             "√(x + y) / (x - y)² + 2 * x² - x * y² = {0:.2f}\n",
             resultado_b);

  return 0;
}
