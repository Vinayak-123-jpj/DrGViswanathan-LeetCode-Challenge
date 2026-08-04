# Day 16

## Problem
Beautiful Matrix (263A)

## Platform
Codeforces

## Difficulty
800

## Approach
- Read the 5×5 matrix.
- Find the position of the element `1`.
- Compute the Manhattan distance from `(row, col)` to the center `(3,3)` using:
  `abs(row - 3) + abs(col - 3)`.
- Print the minimum number of moves.

## Time Complexity
O(25) ≈ O(1)

## Space Complexity
O(1)

## Concepts Used
- Matrix Traversal
- Manhattan Distance
- Nested Loops
- Coordinate Calculation

## Status
✅ Accepted
