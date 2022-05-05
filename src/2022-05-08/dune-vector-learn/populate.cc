#include <fmt/ranges.h>
#include <vector>
#include <array>
#include <numeric>
#include <span>
#include <string>

int main()
{
    // https://www.reddit.com/r/Cplusplus/comments/mgk2dc/array_slicing/
    std::array array1 = {1, 2, 3, 4, 5, 6};
    fmt::print("{}\n", array1);

    auto slice = std::span{array1.begin(), 1};
    fmt::print("{}\n", slice);

    slice = std::span{array1.begin() + 1, 2};
    fmt::print("{}\n", slice);

    // https://stackoverflow.com/a/17694752
    std::vector<int> v(100);                  // vector with 100 ints.
    std::iota(std::begin(v), std::end(v), 0); // Fill with 0, 1, ..., 99.
    fmt::print("{}\n", v);
    std::vector<double> v1(1000);
    std::iota(std::begin(v1), std::end(v1), 0.1);
    fmt::print("{}\n", v1);
    // https://stackoverflow.com/questions/22312959/how-to-fill-a-vector-with-a-range
    // https://gitlab.dune-project.org/core/dune-common/-/commit/64df62745d93fbe6c380a039eebb5a3ac8f0da0c
    // FieldMatrix<double, 3, 3> x = 27
    // FieldMatrix<double, 3, 3> x(27)

    // Dune::DynamicMatrix<double> d(3, 3);
    // d = Dune::DynamicMatrix<double, 2, 2>{{1,2},{3,4}}; // needs !48 to compile

    // Dune::DynamicMatrix<double> d(3, 3);
    // d = Dune::FieldMatrix<double, 2, 2>{{1,2},{3,4}};

    // Dune::DynamicMatrix<double> d(3, 3);
    // d = Dune::FieldMatrix<double, 1, 1>{{1}};

    // Dune::DynamicMatrix<double> d(3, 3);
    // d = 1;

    return 0;
}
