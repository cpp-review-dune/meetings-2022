#include <iostream>
#include <symengine/expression.h>
#include <symengine/constants.h>

int main()
{
  /*
  SymEngine::Expression x("x");
  SymEngine::Expression y("y");
  SymEngine::Expression z("z");
  */

  // auto expression = x * x + y * z + z * x - 5 * z + 6 * x - 2 * z;
  // auto expression2 = pow(cos(x), 2) + pow(sin(x), 2) + pow(sin(z), 2);

  /*
  std::cout << expression
            << std::endl
            << expression2
            << std::endl;
            */

  // std::cout << SymEngine::pi << std::endl;
  // SymEngine::RCP<const SymEngine::Symbol>
  // SymEngine::RCP<const SymEngine::Basic>
  /*
  auto t = SymEngine::symbol("t");
  auto r1 = SymEngine::exp(t);
  r1 = r1->diff(t); // exp
  std::cout << *r1 << std::endl;
  */

  return 0;
}