#include "matplotlibcpp.h"
#include <Eigen/Dense>

namespace plt = matplotlibcpp;

int main()
{
  Eigen::VectorXd x1 = Eigen::VectorXd::LinSpaced(200, 0, 6);
  Eigen::VectorXd y1;

  y1 = x1.array().sin();

  plt::figure();
  plt::plot(x1, y1, "tab:red");
  plt::xlabel("x");
  plt::ylabel("$sin(x)$");
  plt::title("Eigen + Matplotlibcpp");
  plt::grid();
  plt::show();

  // Eigen::VectorXd y2;
  // y2 = x1.array().cos().exp();

  // plt::figure();
  // plt::semilogx(x1, y1, "tab:green", {{"linestyle", "--"}});

  return 0;
}