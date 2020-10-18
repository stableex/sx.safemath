#define CATCH_CONFIG_MAIN

#include <sx.test/test.hpp>

#include "safemath.hpp"

TEST_CASE( "add (pass)" ) {
    REQUIRE( safemath::add(0, 0) == 0 );
    REQUIRE( safemath::add(0, 1) == 1 );
    REQUIRE( safemath::add(1, 1) == 2 );
}

TEST_CASE( "sub (pass)" ) {
    REQUIRE( safemath::sub(0, 0) == 0 );
    REQUIRE( safemath::sub(1, 1) == 0 );
    REQUIRE( safemath::sub(2, 1) == 1 );
}

TEST_CASE( "div (pass)" ) {
    REQUIRE( safemath::div(0, 1) == 0 );
    REQUIRE( safemath::div(1, 1) == 1 );
}

TEST_CASE( "mul (pass)" ) {
    REQUIRE( safemath::mul(0, 1) == 0 );
    REQUIRE( safemath::mul(1, 1) == 1 );
    REQUIRE( safemath::mul(2, 1) == 2 );
}
