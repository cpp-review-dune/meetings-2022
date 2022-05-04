#include <dune/common/fvector.hh>
#include <dune/istl/io.hh>
#include <iostream>

int main()
{
  [[maybe_unused]] int p = 0;
  constexpr int dim = 3;
  Dune::FieldVector<double, dim> x(0);
  Dune::printvector(std::cout, x, "x", "row");

  try
  {
    if (x.dimension != 2)
      DUNE_THROW(Dune::Exception,
                 "DUNE_ASSERT_AND_RETURN returned incorrect dimension");
  }
  catch (Dune::Exception &e)
  {
    std::cerr << "Dune reported error: " << e << std::endl;
    return 1;
  }
  catch (...)
  {
    std::cerr << "Unknown exception thrown!" << std::endl;
    return 1;
  }
}