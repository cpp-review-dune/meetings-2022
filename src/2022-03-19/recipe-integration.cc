// always include the config file
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <dune/common/parallel/mpihelper.hh>
#include <dune/common/parametertreeparser.hh>
#include <dune/common/timer.hh>

#include <dune/geometry/referenceelement.hh>
#include <dune/geometry/quadraturerules.hh>

#include <dune/grid/yaspgrid.hh>

int main(int argc, char **argv)
{
  // Maybe initialize Mpi
  Dune::MPIHelper &helper =
      Dune::MPIHelper::instance(argc, argv);

  // [set up grid]
  const int dim = 4;
  using Grid = Dune::YaspGrid<dim>;

  Dune::FieldVector<double, dim> len;

  for (auto &l : len)
    l = 1.0;

  std::array<int, dim> cells;

  for (auto &c : cells)
    c = 5;

  Grid grid(len, cells);

  // [small vectors and matrices]
  // make a vector
  Dune::FieldVector<double, 4>
      x({1, 2, 3, 4});

  // copy constructor
  auto y(x);

  // scaling
  y *= 1.0 / 3.0;

  // scalar product
  auto s = x * y;

  // Euclidean norm
  auto norm = x.two_norm();

  // make a matrix
  Dune::FieldMatrix<double, 4, 4>
      A({{1, 0, 0, 0},
         {0, 1, 0, 0},
         {0, 0, 1, 0},
         {0, 0, 0, 1}});

  // matvec: y = Ax
  A.mv(x, y);

  // axpy: y += 0.5*Ax
  A.usmv(0.5, x, y);

  // [a function to integrate]
  auto u = [](const auto &x)
  { return std::exp(x.two_norm()); };

  // [integration with midpoint rule]
  double integral = 0.0;

  // extract the grid view
  auto gv = grid.leafGridView();

  for (const auto &e : elements(gv))
    integral +=
        u(e.geometry().center()) *
        e.geometry().volume();

  std::cout << "integral = "
            << integral
            << std::endl;

  // [integration with quadrature rule]
  double integral2 = 0.0;
  using QR =
      Dune::QuadratureRules<Grid::ctype, dim>;

  for (const auto &e : elements(gv))
  {
    auto geo = e.geometry();
    auto quadrature = QR::rule(geo.type(), 5);
    for (const auto &qp : quadrature)
      integral2 +=
          u(geo.global(qp.position())) *
          geo.integrationElement(qp.position()) *
          qp.weight();
  }

  std::cout << "integral2 = "
            << integral2
            << std::endl;

  // [integrating a flux]
  auto f = [](const auto &x)
  { return x; };

  double divergence = 0.0;

  for (const auto &i : elements(gv))
  {
    for (const auto &I : intersections(gv, i))
      if (!I.neighbor())
      {
        auto geoI = I.geometry();
        divergence +=
            f(geoI.center()) *
            I.centerUnitOuterNormal() *
            geoI.volume();
      }
  }

  std::cout << "divergence = "
            << divergence
            << std::endl;
}