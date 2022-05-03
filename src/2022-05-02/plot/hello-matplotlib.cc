#include <matplotlib-cpp/matplotlibcpp.h>

namespace plt = matplotlibcpp;

int main()
{
  std::vector<double> x = {1.5, 2.5, 3.5, 4.5},
                      y = {1, 3, 2, 4};

  plt::figure();
  plt::plot(x, y, "bo-");
  plt::xlabel("time [s]");
  plt::ylabel("observations [m]");
  plt::title("Matplotlib minimal example");
  plt::legend();
  plt::show();

  return 0;
}