#include <dune/common/fvector.hh>
#include <fmt/ranges.h>
#include <iostream>

int main()
{
  [[maybe_unused]] int p = 0;
  constexpr int dim = 2;
  Dune::FieldVector<double, dim> x(0);

  fmt::print("{}\n", x);
  fmt::print("Size of x: {}\n", x.size());
  fmt::print("Euclidian norm of x: {}\n", x.two_norm());
  fmt::print("Maximum norm of x: {}\n", x.infinity_norm());
  fmt::print("Dimension of x: {}\n", x.dimension);

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