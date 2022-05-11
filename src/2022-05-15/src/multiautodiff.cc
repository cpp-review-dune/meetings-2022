#include <iostream>
#include <autodiff/forward/dual.hpp>

autodiff::dual f(autodiff::dual x, autodiff::dual y, autodiff::dual z)
{
  return 1 + x + y + z + x * y + y * z + x * z + x * y * z + exp(x / y + y / z);
}

int main()
{
  autodiff::dual x = 1.0;
  autodiff::dual y = 2.0;
  autodiff::dual z = 3.0;

  autodiff::dual u = f(x, y, z);

  double dudx = autodiff::derivative(f, wrt(x), at(x, y, z));
  double dudy = autodiff::derivative(f, wrt(y), at(x, y, z));
  double dudz = autodiff::derivative(f, wrt(z), at(x, y, z));

  std::cout << "u = " << u << std::endl;
  std::cout << "du/dx = " << dudx << std::endl;
  std::cout << "du/dy = " << dudy << std::endl;
  std::cout << "du/dz = " << dudz << std::endl;
}
