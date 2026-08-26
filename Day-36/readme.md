# Day 36

## Problem

Panoramix's Prediction (80A)

## Platform

Codeforces

## Difficulty

800

## Approach

* Read the values of `n` and `m`.
* Start checking numbers from `n + 1`.
* Check whether each number is prime.
* The first prime number found is the next prime after `n`.
* If this prime number is equal to `m`, print `YES`.
* Otherwise, print `NO`.

## Example

### Input

```text
3 5
```

### Output

```text
YES
```

## Complexity

**Time Complexity:** O(√m)

**Space Complexity:** O(1)

## Language

C++
