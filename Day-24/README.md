# Day 24

## Problem
Soldier and Bananas (546A)

## Platform
Codeforces

## Difficulty
800

## Approach

- Read `k`, `n`, and `w`.
- Calculate the total cost of buying `w` bananas:
  `k * (1 + 2 + ... + w)`
- Using the sum formula:
  `k * w * (w + 1) / 2`
- Calculate the amount to borrow as:
  `max(0LL, total - n)`
- Print the result.

## Time Complexity

O(1)

## Space Complexity

O(1)

## Concepts Used

- Mathematics
- Arithmetic Progression
- Formula
- `long long`
- `max()`

## Status

✅ Accepted
