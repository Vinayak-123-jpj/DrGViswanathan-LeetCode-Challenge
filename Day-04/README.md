# Day 4

## Problem
Two Sum

## Platform
LeetCode

## Difficulty
Easy

## Approach
- Used the brute-force approach with two nested loops.
- Compared every pair of elements in the array.
- If the sum of a pair matched the target, returned their indices.

## Algorithm
1. Traverse the array using the first loop.
2. Use a second loop to check every remaining element.
3. If `nums[i] + nums[j] == target`, store the indices.
4. Return the answer.

## Time Complexity
O(n²)

## Space Complexity
O(1)

## Status
✅ Accepted
