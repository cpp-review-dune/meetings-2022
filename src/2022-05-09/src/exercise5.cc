#include <cmath>
#include <fmt/core.h>
#include <limits>

int main()
{
  const double PI = std::acos(-1);
  double x, left = 1.0, right = 5.0; // [left, right]
  x = 2 * PI;
  // crear un bucle y ver n veces 2 pi est'a en el [[left, right]].

  if (std::abs(right - left) < std::numeric_limits<double>::epsilon())
  {
    fmt::print("{}\n", std::cos(x));
  }

  return 0;
}