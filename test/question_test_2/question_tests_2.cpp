#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Fibonacci sequence generation") {
    REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 5 ");
    REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8 ");
    REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55 ");
    REQUIRE(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144 ");
}

TEST_CASE("Invalid input handling") {
    REQUIRE(get_fib_sequence(0) == "Invalid input. Enter a number between 1 and 15.");
    REQUIRE(get_fib_sequence(16) == "Invalid input. Enter a number between 1 and 15.");
}
