# Day 26

## Problem
Football (96A)

## Platform
Codeforces

## Difficulty
800

## Approach

- Read the football players string.
- Keep track of consecutive players from the same team.
- If the current character is the same as the previous character, increase the count.
- Otherwise, reset the count to `1`.
- If the count reaches `7`, print `YES`.
- If no such sequence exists, print `NO`.

## Example

Input:
```text
001001
```

Output:
```text
NO
```

## Time Complexity

O(n)

## Space Complexity

O(1)

## Concepts Used

- Strings
- Loops
- Character comparison
- Counting consecutive elements
- Conditional statements

## Status

✅ Accepted
