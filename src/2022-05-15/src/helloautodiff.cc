#include <cmath>
#include <iostream>
#include <autodiff/forward/dual.hpp>

autodiff::dual f(autodiff::dual x)
{
  return exp(x);
}

int main()
{
  autodiff::dual x = 0;
  autodiff::dual u = f(x);

  double dudx = autodiff::derivative(f, wrt(x), at(x));

  std::cout << "u(x = " << x << ") = " << u << std::endl;
  std::cout << "du/dx(x = " << x << ") = " << dudx << std::endl;
}
