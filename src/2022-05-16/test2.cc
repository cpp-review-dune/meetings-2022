#include <array>
#include <vector>
#include <algorithm>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <numeric>
#include <random>
// https://stackoverflow.com/a/53596998
// https://stackoverflow.com/q/17694579
// https://stackoverflow.com/a/26053137
int main()
{
  std::vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  fmt::print("{}\n", nums);
  auto square = [&](const int &n)
  { return n * n; };
  std::for_each(std::begin(nums), std::end(nums), square);
  fmt::print("{}\n", nums);

  std::array<int, 10> a;
  std::iota(a.begin(), a.end(), 1);
  fmt::print("{}\n", a);

  std::vector<int> ivec(100);
  std::iota(ivec.begin(), ivec.end(), 0);
  fmt::print("{}\n", ivec);

  std::vector<int> vec(10);
  std::generate(vec.begin(), vec.end(), []
                {
    static int i = 0;
    i = i + 5;
    return i; });

  fmt::print("{}\n", vec);

  // std::uniform_real_distribution<float> distribution(0, 50);
  // std::generate()
  int arr[100];
  std::random_device rd;
  std::default_random_engine dre(rd());
  std::uniform_int_distribution<int> uid(0, 9);

  std::generate(arr, arr + sizeof(arr) / sizeof(int), [&]()
                { return uid(dre); });
  fmt::print("{}\n", a);
}