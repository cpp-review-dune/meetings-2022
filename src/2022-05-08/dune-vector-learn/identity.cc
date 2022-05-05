#include <dune/common/filledarray.hh>
#include <dune/istl/io.hh>
#include <dune/istl/scaledidmatrix.hh>
#include <dune/istl/matrix.hh>
#include <dune/common/fmatrix.hh>

int main(int argc, const char **argv)
{
  Dune::ScaledIdentityMatrix<double, 1> eye_1(1);

  std::cout << eye_1.determinant()
            << std::endl
            << eye_1.N()
            << std::endl
            << eye_1.M()
            << std::endl
            << eye_1.diagonal(1.0)
            << std::endl;

  // Dune::printmatrix(std::cout, eye_1, "abc", "xd");
  // https://www.dune-project.org/doxygen/2.8.0/classDune_1_1ScaledIdentityMatrix.html#a7d1411fdb20065388b1874293cabe760
  Dune::FieldMatrix<double, 3, 4> matrix;
  matrix = 0;
  Dune::printmatrix(std::cout, matrix, "matrix", "row");
  Dune::Matrix<Dune::FieldMatrix<double, 1, 1>> mat(3, 5);
  Dune::printmatrix(std::cout, mat, "matrix", "row");
  auto mat2 = mat.transpose();
  Dune::printmatrix(std::cout, mat2, "matrix", "row");

  /*
  // f(x) =
  auto flambda = [](const auto &x)
  {
    RF s = 0.0;
    RF t = 0.0;
    for (std::size_t i = 0; i < x.size(); i++)
    {
      s += x[i];
      t += x[i] * x[i] * x[i];
    }
    return -6 * s;
  };

  auto alambda = [](const auto &x)
  {
    RF s = 0.0;
    for (std::size_t i = 0; i < x.size(); i++)
      s += x[i];
    return s;
  };

  auto flambda = [](const auto &x)
  {
    return Dune::FieldVector<double, 1>(-2.0 * x.size());
  };

  auto glambda = [](const auto &x)
  {
    double s = 0.0;
    for (std::size_t i = 0; i < x.size(); i++)
      s += x[i] * x[i];
    return s;
  };

  static const int dim = 2;
  Dune::FieldVector<double, dim> lowerleft(0.0);
  Dune::FieldVector<double, dim> upperright(1.0);
  auto N = Dune::filledArray<dim, unsigned int>(4);

  const int dimension = 2;
  auto ulambda = [dimension](const auto &x)
  {
    Dune::FieldVector<double, 2> rv(0.0);
    for (int i = 0; i < dimension; i++)
      rv[0] += (x[i] - 0.375) * (x[i] - 0.375);
    rv[0] = std::max(0.0, 1.0 - 8.0 * sqrt(rv[0]));
    return rv;
  };

  std::vector<int> vec;
  for (int i = 0; i < 10; ++i)
    vec.push_back(i);

  for (auto it = vec.begin(); it != vec.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;

  Dune::FieldVector<double, 2> L(1.0);
  auto N = Dune::filledArray<2, int>(1);

  // https://github.com/cpp-review-dune/tutorials/blob/main/tutorial06/slides/src_examples/example01_main.hh
  */
  Dune::FieldMatrix<int, 4, 4> rectangle_matrix = {{6, 7, 8, 10},
                                                   {8, 9, 11, 12},
                                                   {9, 11, 13, 15},
                                                   {11, 13, 16, 18}};
  Dune::printmatrix(std::cout, rectangle_matrix, "matrix", "row");
  // https://git.imp.fu-berlin.de/agnumpde/dune-matrix-vector/-/blob/master/dune/matrix-vector/test/staticmatrixtoolstest.cc

  Dune::FieldMatrix<int, 2, 2> squareFieldMatrix = {{1, 2},
                                                    {3, 4}};
  Dune::printmatrix(std::cout, squareFieldMatrix, "matrix", "row");

  Dune::ScaledIdentityMatrix<double, 2> scaledIdentityMatrix_T1(3),
      scaledIdentityMatrix_T2(4), scaledIdentityMatrix_B(2);

  return 0;
}
