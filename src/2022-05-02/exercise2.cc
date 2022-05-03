#include <cmath>

#include <fmt/core.h>
#include <fmt/color.h>

int main()
{
  constexpr auto pi = std::numbers::pi;

  auto resultado_a = sin(0.2 * pi) / cos(pi / 6) + tan(pi / 180 * 72);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::yellow),
             "sin(0.2*pi)/cos(pi/6) + tan 72° = {0:.2f}\n",
             resultado_a);

  auto resultado_b = pow(tan(pi / 180 * 64) * cos(pi / 180 * 15), 2) +
                     pow(sin(pi / 180 * 37) / cos(pi / 180 * 20), 2);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::orange),
             "(tan(64°)*cos(15°))^2 + (sin(37°)/cos(20°))^2 = {0:.2f}\n",
             resultado_b);

  return 0;
}
