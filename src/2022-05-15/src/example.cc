#include <symengine/expression.h>
#include <symengine/pow.h>
#include <symengine/ntheory.h>
#include <symengine/integer.h>
#include <symengine/series.h>
#include <iostream>
#include <chrono>
//#include <symengine/symbol.h>
// reference counted pointers (RCP)
int main(int argc, const char **argv)
{
  SymEngine::Expression x("x");
  SymEngine::Expression y("y");
  SymEngine::Expression z("z");

  auto expression1 = SymEngine::pow((2 * x + y), 2);
  auto expression2 = SymEngine::pow(2 * SymEngine::pow(x, 2) + 3 * y, 2);
  auto expression3 = (1 / (y * z) - y * z) * y * z;

  std::cout << SymEngine::expand(expression1)
            << std::endl
            << SymEngine::expand(expression2)
            << std::endl
            << SymEngine::expand(expression3)
            << std::endl;

  auto expression4 = SymEngine::binomial(SymEngine::Integer(5), 2);
  auto expression5 = SymEngine::divides(SymEngine::Integer(5), SymEngine::Integer(2));

  SymEngine::RCP<const SymEngine::Symbol> a = SymEngine::symbol("a");
  unsigned int n = 15;
  SymEngine::RCP<const SymEngine::Basic> ex = SymEngine::sin(SymEngine::cos(SymEngine::add(SymEngine::integer(1), a)));
  auto t1 = std::chrono::high_resolution_clock::now();
  SymEngine::RCP<const SymEngine::Basic> res = SymEngine::series(ex, a, n);
  auto t2 = std::chrono::high_resolution_clock::now();

  return 0;
}