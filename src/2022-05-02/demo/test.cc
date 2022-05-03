#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

#include "student.hh"

TEST_CASE("Comparing values from first")
{
  REQUIRE(result_1a == Approx(320.79));

  REQUIRE(result_1b == Approx(-67.342));

  REQUIRE(result_1c == Approx(23.816));
}

TEST_CASE("Comparing values from second")
{
  REQUIRE(result_2a == Approx(3.7564));

  REQUIRE(result_2b == Approx(4.3323));
}

TEST_CASE("Comparing values from third")
{
  REQUIRE(expr1(x, y) == Approx(5.6091));

  REQUIRE(expr2(x, y) == Approx(-8.9198));
}