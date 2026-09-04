Day 45
Problem

Xenia and Ringroad

Platform

Codeforces

Problem Number

339B

Difficulty

Easy

Approach
Start from house 1.
Traverse the houses in the given order.
If the destination is ahead of the current position, add the direct distance.
Otherwise, move to the end of the ringroad and continue from house 1.
Update the current position after reaching each destination.
Use long long to safely store the total distance.
Time Complexity

O(m)

Space Complexity

O(1)

Key Learning

Practiced circular traversal, loops, conditional logic, and handling large values in C++.
