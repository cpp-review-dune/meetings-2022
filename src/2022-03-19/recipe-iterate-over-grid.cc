
// always include the config file
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <dune/common/parallel/mpihelper.hh>
#include <dune/common/parametertreeparser.hh>
#include <dune/common/timer.hh>

#include <dune/grid/yaspgrid.hh>

int main(int argc, char **argv)
{
  // Maybe initialize Mpi
  [[maybe_unused]] Dune::MPIHelper &helper = Dune::MPIHelper::instance(argc, argv);

  // [set up grid]
  const int dim = 4;
  using Grid = Dune::YaspGrid<dim>;
  Dune::FieldVector<double, dim> len;
  for (auto &l : len)
    l = 1.0;
  std::array<int, dim> cells;
  for (auto &c : cells)
    c = 4;
  Grid grid(len, cells);

  // [extract gridview]
  auto gv = grid.leafGridView();

  // [iterate over codim]
  const int codim = 2;
  for (const auto &e : entities(gv, Dune::Codim<codim>{}))
    if (!e.type().isCube())
      std::cout << "not a cube" << std::endl;

  // [iterate over grid view]
  for ([[maybe_unused]] const auto &e : elements(gv))
    ; // codim=0
  for ([[maybe_unused]] const auto &e : vertices(gv))
    ; // codim=dim
  for ([[maybe_unused]] const auto &e : edges(gv))
    ; // codim=dim-1
  for ([[maybe_unused]] const auto &e : facets(gv))
    ; // codim=1

  // [access to subentities]
  const int mycodim = 2;
  for (const auto &e : elements(gv))
    for (unsigned int i = 0; i < e.subEntities(mycodim); ++i)
      [[maybe_unused]] auto v = e.template subEntity<codim>(i);
}