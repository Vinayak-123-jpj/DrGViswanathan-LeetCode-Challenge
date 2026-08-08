# Day 22

## Problem
Queue at the School (450A)

## Platform
Codeforces

## Difficulty
800

## Approach

- Read `n`, `t`, and the queue string.
- Simulate the queue for `t` seconds.
- During each second, traverse the string from left to right.
- If the pattern `BG` is found, swap it to `GB`.
- Skip the next position after a swap.
- Print the final arrangement.

## Time Complexity

O(n × t)

## Space Complexity

O(n)

## Concepts Used

- Strings
- Simulation
- Swapping
- Traversal

## Status

✅ Accepted
