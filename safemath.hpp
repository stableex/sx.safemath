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
    static uint64_t sub(const uint64_t x, const uint64_t y) {
        const uint64_t z = x - y;
        eosio::check(z <= x, "safemath-sub-overflow"); return z;
    }

    /**
     * ## STATIC `mul`
     *
     * ### params
     *
     * - `{uint64_t} x`
     * - `{uint64_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint64_t z = safemath::mul(2, 2);
     * //=> 4
     * ```
     */
    static uint64_t mul(const uint64_t x, const uint64_t y) {
        const uint64_t z = x * y;
        eosio::check(y == 0 || z / y == x, "safemath-mul-overflow"); return z;
    }

    /**
     * ## STATIC `div`
     *
     * ### params
     *
     * - `{uint64_t} x`
     * - `{uint64_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint64_t z = safemath::div(4, 2);
     * //=> 2
     * ```
     */
    static uint64_t div(const uint64_t x, const uint64_t y) {
        eosio::check(y > 0, "safemath-divide-zero");
        return x / y;
    }

    /**
     * ## STATIC `add128`
     *
     * ### params
     *
     * - `{uint128_t} x`
     * - `{uint128_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint128_t z = safemath::add128(1, 2);
     * //=> 3
     * ```
     */
    static uint128_t add128( const uint128_t x, const uint128_t y ) {
        const uint128_t z = x + y;
        eosio::check( z >= x, "safemath-add-overflow"); return z;
    }

    /**
     * ## STATIC `sub128`
     *
     * ### params
     *
     * - `{uint128_t} x`
     * - `{uint128_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint128_t z = safemath::sub128(3, 2);
     * //=> 1
     * ```
     */
    static uint128_t sub128(const uint128_t x, const uint128_t y) {
        const uint128_t z = x - y;
        eosio::check(z <= x, "safemath-sub-overflow"); return z;
    }

    /**
     * ## STATIC `mul128`
     *
     * ### params
     *
     * - `{uint128_t} x`
     * - `{uint128_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint128_t z = safemath::mul128(2, 2);
     * //=> 4
     * ```
     */
    static uint128_t mul128(const uint128_t x, const uint128_t y) {
        const uint128_t z = x * y;
        eosio::check(y == 0 || z / y == x, "safemath-mul-overflow");
        return z;
    }

    /**
     * ## STATIC `div128`
     *
     * ### params
     *
     * - `{uint128_t} x`
     * - `{uint128_t} y`
     *
     * ### example
     *
     * ```c++
     * const uint128_t z = safemath::div128(4, 2);
     * //=> 2
     * ```
     */
    static uint128_t div128(const uint128_t x, const uint128_t y) {
        eosio::check(y > 0, "safemath-divide-zero");
        return x / y;
    }
}