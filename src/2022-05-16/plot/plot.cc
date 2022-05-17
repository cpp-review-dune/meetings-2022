#include <matplotlib-cpp/matplotlibcpp.h>

int main()
{
  namespace plt = matplotlibcpp;
  std::vector<double> x = {1.5, 2.5, 3.5, 4.5},
                      y = {1, 3, 2, 4};

  plt::figure();
  plt::plot(x, y, "bo-");
  plt::xlabel("time [s]");
  plt::ylabel("observations [m]");
  plt::title("Matplotlib minimal example");
  plt::legend();
  plt::show();
  // plt::save("plot.png");

  return 0;
}