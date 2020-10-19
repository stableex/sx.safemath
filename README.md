# **`SafeMath`**

[![Build Status](https://travis-ci.org/stableex/sx.safemath.svg?branch=master)](https://travis-ci.org/stableex/sx.safemath)

> A library for performing overflow-safe math, courtesy of DappHub (https://github.com/dapphub/ds-math)

## Quickstart

```c++
#include "safemath.hpp"

safemath::add(1, 2);
//=> 3
safemath::sub(3, 2);
//=> 1
```

## Table of Content

- [STATIC `add`](#static-add)
- [STATIC `sub`](#static-sub)
- [STATIC `mul`](#static-mul)
- [STATIC `div`](#static-div)

## STATIC `add`

### params

- `{uint64_t} x`
- `{uint64_t} y`

### example

```c++
const uint64_t z = safemath::add(1, 2);
//=> 3
```

## STATIC `sub`

### params

- `{uint64_t} x`
- `{uint64_t} y`

### example

```c++
const uint64_t z = safemath::sub(3, 2);
//=> 1
```

## STATIC `mul`

### params

- `{uint64_t} x`
- `{uint64_t} y`

### example

```c++
const uint64_t z = safemath::mul(2, 2);
//=> 4
```

## STATIC `div`

### params

- `{uint64_t} x`
- `{uint64_t} y`

### example

```c++
const uint64_t z = safemath::div(4, 2);
//=> 2
```