#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Kinetic Energy Calculation") {
    REQUIRE(get_kinetic_energy(10, 9) == Approx(405.0));
    REQUIRE(get_kinetic_energy(20, 5) == Approx(250.0));
    REQUIRE(get_kinetic_energy(30, 7) == Approx(735.0));
}

TEST_CASE("Zero and Negative Input Handling") {
    REQUIRE(get_kinetic_energy(0, 10) == Approx(0.0));
    REQUIRE(get_kinetic_energy(10, 0) == Approx(0.0));
}
