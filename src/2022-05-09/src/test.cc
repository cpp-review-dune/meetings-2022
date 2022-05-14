#include <fmt/core.h>
#include <array>
#include <algorithm>
#include <random>

int main(int argc, const char **argv)
{
  std::array<float, 50> temperatures_fahrenheit;
  std::uniform_real_distribution<float> distribution(0, 50);

  // Primera forma con iteradores
  std::array<float, 50>::iterator array_iterator = temperatures_fahrenheit.begin();

  /*
  while (array_iterator != temperatures_fahrenheit.end())
  {
    std::cout << temperatures_fahrenheit[0] << std::endl;
    array_iterator++;
  }
  */

  // fmt::print("{}\n", temperatures_fahrenheit);
  return 0;
}