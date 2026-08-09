# Day 23

## Problem
Elephant (617A)

## Platform
Codeforces

## Difficulty
800

## Approach

- Read the distance `x`.
- The elephant can move at most 5 units in one step.
- Therefore, the minimum number of steps is the ceiling of `x / 5`.
- Using integer arithmetic, this can be calculated as `(x + 4) / 5`.
- Print the result.

## Time Complexity

O(1)

## Space Complexity

O(1)

## Concepts Used

- Mathematics
- Integer Division
- Ceiling Division

## Status

✅ Accepted
