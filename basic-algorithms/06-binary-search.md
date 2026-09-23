# Problem: Binary Search (Easy)

## Problem

Given a sorted array of integers and a target value, return the index of the target if it exists. Otherwise, return -1.

## Approach

Use binary search.

Set two pointers, `left` and `right`, to the beginning and end of the array.

Find the middle element:
`mid = left + (right - left) / 2`

- If the middle element equals the target, return its index.
- If the middle element is smaller than the target, search the right half.
- Otherwise, search the left half.

If the target is not found, return -1.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Binary search works efficiently on a sorted array by repeatedly dividing the search range into half.
