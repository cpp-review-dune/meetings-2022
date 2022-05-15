#include <cmath>
#include <fmt/core.h>

int main()
{
  auto area = [&](double radio_1, double radio_2)
  {
    const double PI = std::acos(-1);
    double gamma = std::acos(radio_2 / radio_1);
    return 2 * PI * (std::pow(radio_1, 2) + std::pow(radio_2, 2) / gamma * std::log(std::cos(gamma) / (1 - gamma)));
  };

  auto area_aproximada = [&](double radio_1, double radio_2)
  {
    const double PI = std::acos(-1);
    return 4 * PI * std::pow((radio_1 + radio_2) / 2, 2);
  };

  double radio_ecuatorial = 6378.137;
  double radio_polar = 6356.752;

  fmt::print("Area:\t\t\t{}\nApproximate area:\t{}\n",
             area(radio_ecuatorial, radio_polar),
             area_aproximada(radio_ecuatorial, radio_polar));

  return 0;
}