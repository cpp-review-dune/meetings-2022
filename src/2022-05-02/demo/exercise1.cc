#include <cmath>
#include <fmt/core.h>
#include <fmt/color.h>

int main()
{
  // Parte a)
  double resultado_a = pow(5 - 19. / 7 + pow(2.5, 3), 2);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::yellow),
             "(5 - 19 / 7 + 2.5³)² = {0:.2f}\n",
             resultado_a);

  // Parte b)
  double resultado_b = 7 * 3.1 + sqrt(120) / 5 - pow(15, 5. / 3);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::green_yellow),
             "7 * 3.1 + √120 / 5 - 15 ^ (5 / 3) = {0:.2f}\n",
             resultado_b);

  // Parte c)
  double resultado_c = pow(1 / sqrt(75) + 73 / pow(3.1, 3), 1. / 4) +
                       55 * 0.41;
  fmt::print(fmt::emphasis::bold | fg(fmt::color::sky_blue),
             "pow(1 / √75 + 73 / 3.1³, ¼) + 55 * 0.41 = {0:.2f}\n",
             resultado_c);

  return 0;
}
