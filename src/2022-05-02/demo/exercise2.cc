#include <cmath>
#include <fmt/core.h>
#include <fmt/color.h>

int main()
{
  // constante en tiempo de compilación
  constexpr double PI = std::numbers::pi;

  double resultado_a = sin(0.2 * PI) / cos(PI / 6) + tan(PI / 180 * 72);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::yellow),
             "sin(0.2 * pi) / cos(pi / 6) + tan(72°) = {0:.2f}\n",
             resultado_a);

  double resultado_b = pow(tan(PI / 180 * 64) * cos(PI / 180 * 15), 2) +
                       pow(sin(PI / 180 * 37) / cos(PI / 180 * 20), 2);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::orange),
             "(tan(64°) * cos(15°)) ^ 2 + (sin(37°) / cos(20°)) ^ 2 = {0:.2f}\n",
             resultado_b);

  return 0;
}
