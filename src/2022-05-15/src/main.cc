//#include <symengine/assumptions.h>
//#include <symengine/logic.h>
//#include <symengine/symbol.h>
#include <symengine/expression.h>
#include <symengine/symbol.h>
#include <symengine/printers/latex.h>
#include <symengine/matrix.h>
#include <symengine/add.h>
#include <symengine/mul.h>
#include <symengine/pow.h>
#include <iostream>

using SymEngine::Expression;
using SymEngine::LatexPrinter;
// using SymEngine::Constant;
// using SymEngine::Integer;
using SymEngine::add;
using SymEngine::Basic;
using SymEngine::integer;
using SymEngine::mul;
using SymEngine::pow;
using SymEngine::RCP;
using SymEngine::symbol;

int main(int argc, const char **argv)
{
  Expression x("x");
  LatexPrinter p;

  auto ex = pow(x + sqrt(Expression(2)), 6);

  std::cout << ex << std::endl;

  std::cout << SymEngine::expand(ex) << std::endl;

  RCP<const Basic> y = symbol("y");
  RCP<const Basic> a = y;
  RCP<const Basic> c = integer(2);

  a = add(a, mul(c, pow(y, integer(3))));
  // SymEngine::Expression b("b");
  // SymEngine::Expression x, y, z;
  // x = SymEngine::Expression(1);
  // y = SymEngine::Expression(2);
  // z = x + y + a + b + a / 2;
  return 0;
}