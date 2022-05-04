#include <iostream>

#include <dune/functions/analyticfunctions/polynomial.hh>

int main(int argc, char **argv)
{
  auto p = Dune::Functions::Polynomial<int>({1, 2, 3});
  auto a_i = p.coefficients();

  std::cout << "P[x] = "
            << a_i[0]
            << "* x ^ "
            << 0 << " + "
            << a_i[1]
            << "* x ^ "
            << 1
            << " + "
            << a_i[2]
            << "* x ^ "
            << 2
            << std::endl
            << "P[x = 0]: "
            << p(0)
            << std::endl
            << "P[x = 1]: "
            << p(1)
            << std::endl
            << "P[x = 2]: "
            << p(2)
            << std::endl;
  return 0;
}
