#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

auto x = 1.1 + 0.1 + 0.1;

TEST_CASE("Comparing values")
{
  REQUIRE(x == Approx(1.3));
}
