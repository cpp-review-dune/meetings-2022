#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fmt/ranges.h>

// https://github.com/p-ranav/tabulate

int main(int argc, const char **argv)
{

  auto fahrenheit2celsius = [&](float temperature_fahrenheit)
  {
    return 5. / 9 * (temperature_fahrenheit - 32);
  };

  auto celsius2fahrenheit = [&](float temperature_celsius)
  {
    return 9. / 5 * (temperature_celsius + 32);
  };

  auto fahrenheit2kelvin = [&](float temperature_fahrenheit)
  {
    return 5. / 9 * (temperature_fahrenheit - 32) + 273.15;
  };

  auto kelvin2fahrenheit = [&](float temperature_kelvin)
  {
    return 9. / 5 * (temperature_kelvin - 273.15) + 32;
  };

  std::vector<float> v(20);
  std::default_random_engine gen{std::random_device{}()};
  // https://en.wikipedia.org/wiki/Scale_of_temperature#Conversion_table_between_different_temperature_scales
  std::uniform_real_distribution<float> distribution(-50, 110);

  std::generate(std::begin(v), std::end(v), [&]
                { return distribution(gen); });
  fmt::print("°C: {}\n", v);
  // std::for_each(std::begin(v), std::end(v), [](double &a)
  // { a *= 3; });

  // std::for_each(std::begin(v), std::end(v), [&]
  //                { return fahrenheit2celsius; });
  fmt::print("°F: {}\n", v);

  return 0;
}