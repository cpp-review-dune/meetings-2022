#include <cmath>
#include <fmt/core.h>

constexpr double PI = std::numbers::pi;

int main()
{
  auto P_1 = [&](double a, double b)
  {
    return PI *
           (a + b);
  };

  auto P_2 = [&](double a, double b)
  {
    return PI *
           std::sqrt(2 * (std::pow(a, 2) + std::pow(b, 2)));
  };

  auto P_3 = [&](double a, double b)
  {
    return PI *
           std::sqrt(2 * (std::pow(a, 2) + std::pow(b, 2)) -
                     std::pow(a - b, 2) / 2);
  };

  auto P_4 = [&](double a, double b)
  {
    double h = std::pow((a - b) / (a + b), 2);
    return P_1(a, b) *
           std::pow((1 + h / 8), 2);
  };

  auto P_5 = [&](double a, double b)
  {
    double h = std::pow((a - b) / (a + b), 2);
    return P_1(a, b) *
           (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
  };

  auto P_6 = [&](double a, double b)
  {
    double h = std::pow((a - b) / (a + b), 2);
    return P_1(a, b) *
           (64 - 3 * std::pow(h, 2)) / (64 - 16 * h);
  };

  auto P_7 = [&](double a, double b)
  {
    double h = std::pow((a - b) / (a + b), 2);
    return P_1(a, b) *
           (256 - 48 * h - 21 * std::pow(h, 2)) /
           (256 - 112 * h + 3 * std::pow(h, 2));
  };

  auto P_8 = [&](double a, double b)
  {
    double h = std::pow((a - b) / (a + b), 2);
    return P_1(a, b) * (3 - std::sqrt(1 - h)) / 2;
  };

  fmt::print("(a, b)\t\th\t\tP_1(a,b)\t\tP_2(a,b)\t\tP_3(a,b)\n");

  for (double i = 1.0; i > 0.1; i = i - 0.1)
  {
    double a = 1, b = i;
    double h = std::pow((a - b) / (a + b), 2);
    fmt::print("(1, {})\t\t{}\t\t{}\t\t{}\t\t{}\n",
               i,
               h,
               P_1(a, b),
               P_2(a, b),
               P_3(a, b));
  }

  return 0;
}