#include <dune/common/fmatrix.hh>
#include <dune/istl/io.hh>
#include <dune/istl/matrix.hh>
#include <fmt/ranges.h>

int main()
{
  constexpr int dim = 3;
  Dune::FieldVector<double, dim> x(0);
  Dune::printvector(std::cout, x, "x", "row");
  fmt::print("x = {}\n", x);

  Dune::Matrix<double> matrix(3, 5);
  matrix = 0;
  Dune::printmatrix(std::cout, matrix, "Matrix<double>", "--");
  fmt::print("matrix has {} rows.\n", matrix.N());
  fmt::print("matrix has {} columns.\n", matrix.M());
  // https://en.cppreference.com/w/cpp/algorithm/ranges/iota
  // https://sodocumentation.net/cplusplus/topic/2294/std--function--to-wrap-any-element-that-is-callable
  // https://docs.microsoft.com/de-de/cpp/cpp/cpp-language-reference?view=msvc-170
  // https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c
  // https://stackoverflow.com/questions/62353259/error-cannot-convert-lambdadouble-to-double-double
  // https://en.cppreference.com/w/cpp/algorithm/iota
  // https://www.bu.edu/tech/files/2016/09/intro_matlab.pdf

  return 0;
}