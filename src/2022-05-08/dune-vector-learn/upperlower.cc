// https://git.imp.fu-berlin.de/agnumpde/dune-matrix-vector/-/blob/master/dune/matrix-vector/test/triangularsolvetest.cc
#include <random>

#include <dune/common/bitsetvector.hh>
#include <dune/common/fmatrix.hh>
#include <dune/common/fvector.hh>
#include <dune/istl/bcrsmatrix.hh>
#include <dune/istl/bvector.hh>
#include <dune/istl/matrixindexset.hh>
#include <dune/matrix-vector/triangularsolve.hh>
#include <dune/matrix-vector/transpose.hh>

template <typename FT> struct ToleranceTraits {
  static constexpr FT tol = 50 * std::numeric_limits<FT>::epsilon();
};

template <class T>
typename Dune::FieldTraits<typename T::field_type>::real_type
diffDune(T t1, const T &t2) {
  t1 -= t2;
  return t1.infinity_norm();
}
template <class TX> bool isCloseDune(TX t1, const TX &t2) {
  return diffDune(t1, t2) < ToleranceTraits<typename TX::field_type>::tol;
}
template <class FT, class Other> bool isCloseAbs(FT t1, Other t2) {
  return std::abs<FT>(t1 - t2) < ToleranceTraits<FT>::tol;
}

double const tol = 1e-10;
double const reg = 1e-6;

template <int n, bool lower> bool test() {
  using ft = double;
  using LocalMatrix = Dune::FieldMatrix<ft, 1, 1>;
  using Matrix = Dune::BCRSMatrix<LocalMatrix>;
  using LocalVector = Dune::FieldVector<ft, 1>;
  using Vector = Dune::BlockVector<LocalVector>;

  bool passed = true;

  std::random_device randomDevice;
  std::mt19937 generator(randomDevice());

  Matrix M;
  Dune::MatrixIndexSet indices(n, n);
  for (size_t i = 0; i < n; ++i) {
    size_t initialJ = lower ? 0 : i;
    size_t finalJ = lower ? i + 1 : n;
    for (size_t j = initialJ; j < finalJ; ++j) {
      std::uniform_int_distribution<int> integerDistribution(1,
                                                             finalJ - initialJ);
      auto aroundTen = [&]() {
        auto x = integerDistribution(generator);
        return x <= 10;
      };
      // Add a diagonal entry and approximately ten non-zero entries
      if (i == j or aroundTen())
        indices.add(i, j);
    }
  }
  indices.exportIdx(M);

  std::uniform_real_distribution<ft> unconstrainedDistribution(-1, 1);
  for (auto it = M.begin(); it != M.end(); ++it) {
    size_t const i = it.index();
    for (auto cIt = it->begin(); cIt != it->end(); ++cIt) {
      size_t const j = cIt.index();
      *cIt = unconstrainedDistribution(generator);
      // Make sure the diagonal is bounded away from zero
      if (i == j)
        *cIt += (*cIt > 0 ? 1 : -1) + reg;
    }
  }

  Vector sol(n);
  for (auto &x : sol)
    x = unconstrainedDistribution(generator);
  Vector b(n);
  M.mv(sol, b);

  Dune::BitSetVector<1> *ignore = nullptr;
  {
    auto x = lower ? Dune::MatrixVector::lowerTriangularSolve(M, b, ignore)
                   : Dune::MatrixVector::upperTriangularSolve(M, b, ignore);
    Vector y(n);
    M.mv(x, y);
    auto diff = diffDune(b, y);
    std::cout << "|x - A^{-1}b| = " << diff << std::endl;
    passed &= diff < tol;
  }
  {
    auto x = lower
                 ? Dune::MatrixVector::upperTriangularSolve(M, b, ignore, true)
                 : Dune::MatrixVector::lowerTriangularSolve(M, b, ignore, true);
    Vector y(n);
    M.mtv(x, y);
    auto diff = diffDune(b, y);
    std::cout << "|x - A^{-T}b| = " << diff << " (manual transpose)"
              << std::endl;
    passed &= diff < tol;
  }
  {
    Matrix Mt;
    Dune::MatrixVector::transpose(M, Mt);
    auto x = lower ? Dune::MatrixVector::upperTriangularSolve(Mt, b, ignore)
                   : Dune::MatrixVector::lowerTriangularSolve(Mt, b, ignore);
    Vector y(n);
    M.mtv(x, y);
    auto diff = diffDune(b, y);
    std::cout << "|x - A^{-T}b| = " << diff << std::endl;
    passed &= diff < tol;
  }
  return passed;
}

int main() {
  bool passed = true;
  std::cout << "Testing random upper triangular matrix" << std::endl;
  passed &= test<5000, false>();
  std::cout << "Testing lower triangular matrix" << std::endl;
  passed &= test<5000, true>();
  return passed ? 0 : 1;
}

// https://www.geeksforgeeks.org/slicing-a-vector-in-c/