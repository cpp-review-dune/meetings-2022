#include <dune/common/fmatrix.hh>
#include <dune/istl/io.hh>
#include <dune/istl/matrix.hh>
#include <fmt/core.h>
#include <fmt/ranges.h>

int main()
{
  constexpr int dim = 2;
  Dune::FieldVector<double, dim> x(0);
  Dune::printvector(std::cout, x, "x", "row");

  fmt::print("x = {}\n", x);
  fmt::print("Size of x: {}\n", x.size());
  fmt::print("Euclidian norm of x: {}\n", x.two_norm());
  fmt::print("Maximum norm of x: {}\n", x.infinity_norm());
  fmt::print("Dimension of x: {}\n", x.dimension);

  Dune::Matrix<double> matrix(3, 5);
  matrix = 0;

  Dune::printmatrix(std::cout, matrix, "Matrix<double>", "--");
  fmt::print("matrix has {} rows.\n", matrix.N());
  fmt::print("matrix has {} columns.\n", matrix.M());

  return 0;
}