#include <dune/common/dotproduct.hh>
#include <dune/common/fvector.hh>
#include <dune/istl/matrix.hh>
//#include <dune/common/fmatrix.hh>
// TODO: Falta revisar este header!
#include <dune/functions/analyticfunctions/polynomial.hh>
#include <dune/istl/io.hh>
#include <fmt/ranges.h>
#include <iostream>

int main()
{

  Dune::FieldVector<double, 10> x(acos(-1));
  Dune::printvector(std::cout, x, "Vector x", "Fila", 1, 10, 10);

  Dune::FieldVector<double, 10> y(2);

  fmt::print("Primera forma sin iterador:\n{}\n", x);
  fmt::print("{}\n", x.dim());
  fmt::print("{}\n", x.one_norm());
  fmt::print("{}\n", x.two_norm());
  fmt::print("{}\n", x.infinity_norm());

  fmt::print("{}\n", Dune::dot(x, y));

  double scalar_dot = 0;

  if (x.dim() == y.dim())
  {
    for (int i = 0; i < x.size(); i++)
    {
      scalar_dot += x[i] * y[i];
    }
  }

  fmt::print("Dot product of x and y: {}\n", scalar_dot);

  Dune::Matrix<double> matrix(3, 5);
  matrix = 2;
  Dune::printmatrix(std::cout, matrix, "Matrix<double>", "row");
  fmt::print("Filas de matrix: {}\nColumnas de matrix: {}\n", matrix.N(),
             matrix.M());
  fmt::print("\n{}\n", matrix.frobenius_norm());

  auto p = Dune::Functions::Polynomial<int>({1, 2, 3});

  for (const auto &c : p.coefficients())
  {
    fmt::print("{}\n", c);
  }

  return 0;
}
