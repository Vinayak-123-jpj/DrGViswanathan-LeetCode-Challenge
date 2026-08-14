# Day 28

## Problem

Petya and Countryside (66B)

## Platform

Codeforces

## Difficulty

1000

## Approach

* Start from each position.
* Move left while the previous height is less than or equal to the current height.
* Move right using the same condition.
* Count the number of trees covered.
* Keep the maximum count.

## Example

Input:

```text
5
1 2 3 2 1
```

Output:

```text
5
```

## Time Complexity

O(n²)

## Space Complexity

O(1)

## Concepts Used

* Arrays
* Loops
* Conditions
* Maximum value
* Two-direction traversal

## Status

✅ Accepted
