# Day 21

## Problem
Twins (160A)

## Platform
Codeforces

## Difficulty
800

## Approach

- Read the number of coins.
- Calculate the total value of all coins.
- Sort the coins in descending order.
- Take the largest coins one by one.
- Keep adding their values to `mySum`.
- Stop when `mySum` becomes greater than the value of the remaining coins.
- Print the minimum number of coins required.

## Time Complexity

O(n log n)

The sorting operation takes O(n log n) time.

## Space Complexity

O(n)

A vector is used to store the coin values.

## Concepts Used

- Arrays / Vectors
- Sorting
- Greedy Algorithm
- Prefix Sum Concept

## Status

✅ Accepted
