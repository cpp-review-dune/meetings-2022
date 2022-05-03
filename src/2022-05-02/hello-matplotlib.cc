#include <matplotlib-cpp/matplotlibcpp.h>

namespace plt = matplotlibcpp;

int main()
{
  std::cout << "Primer plot en C++" << std::endl;

  plt::plot({1, 3, 2, 4});
  plt::show();

  return 0;
}