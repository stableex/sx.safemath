#pragma once

namespace safemath {
    /**
     * ## STATIC `add`
     *
     * ### params
     *
     * - `{uint64_t} x`
     * - `{uint64_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint64_t z = safemath::add(1, 2);
     * //=> 3
     * ```
     */
    static uint64_t add( const uint64_t x, const uint64_t y ) {
        const uint64_t z = x + y;
        eosio::check( z >= x, "safemath-add-overflow"); return z;
    }

    /**
     * ## STATIC `sub`
     *
     * ### params
     *
     * - `{uint64_t} x`
     * - `{uint64_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint64_t z = safemath::sub(3, 2);
     * //=> 1
     * ```
     */
    uint64_t sub(const uint64_t x, const uint64_t y) {
        const uint64_t z = x - y;
        eosio::check(z <= x, "safemath-sub-overflow"); return z;
    }

    // uint64_t mul(const uint64_t a, const uint64_t b) {
    //     uint64_t c = a * b;
    //     check(b == 0 || c / b == a, "mul-overflow"); return c;
    // }

    // uint64_t div(const uint64_t a, const uint64_t b) {
    //     check(b > 0, "divide by zero");
    //     return a / b;
    // }
}