#include <symengine/expression.h>
#include <symengine/matrix.h>
#include <symengine/pow.h>

int main(int argc, const char **argv)
{
  SymEngine::vec_basic elems{
      SymEngine::integer(1),
      SymEngine::integer(0),
      SymEngine::integer(-1),
      SymEngine::integer(-2),
  };

  SymEngine::DenseMatrix A = SymEngine::DenseMatrix(2, 2, elems);

  std::cout << A.__str__() << std::endl;

  SymEngine::Expression x("x");
  auto ex = SymEngine::pow(
      x + SymEngine::sqrt(SymEngine::Expression(2)), 6);

  std::cout << SymEngine::expand(ex) << std::endl;

  SymEngine::RCP<const SymEngine::Symbol> t = SymEngine::symbol("t");
  SymEngine::RCP<const SymEngine::Basic> r1 = SymEngine::sqrt(t);
  r1 = r1->diff(t);

  std::cout << *r1 << std::endl;

  return 0;
}