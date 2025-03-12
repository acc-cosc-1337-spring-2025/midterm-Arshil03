#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Fibonacci Number Calculation") {
    REQUIRE(get_fib_number(5) == 5);
    REQUIRE(get_fib_number(7) == 13);
    REQUIRE(get_fib_number(10) == 55);
    REQUIRE(get_fib_number(12) == 144);
}

TEST_CASE("Edge Cases") {
    REQUIRE(get_fib_number(1) == 1);
    REQUIRE(get_fib_number(0) == 0);
    
}
