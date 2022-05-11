
#include <iostream>
#include <complex>
#include <autodiff/forward/dual.hpp>

namespace autodiff::detail
{
  template <typename T>
  struct ArithmeticTraits<std::complex<T>> : ArithmeticTraits<T>
  {
  };
}

using cxdual = autodiff::Dual<std::complex<double>, std::complex<double>>;

cxdual f(cxdual x)
{
  return exp(x);
}

int main()
{
  cxdual x = 0;    // the input variable x
  cxdual u = f(x); // the output variable u

  cxdual dudx = autodiff::derivative(f, wrt(x), at(x));

  std::cout << "u = " << u << std::endl;
  std::cout << "du/dx = " << dudx << std::endl;
}
