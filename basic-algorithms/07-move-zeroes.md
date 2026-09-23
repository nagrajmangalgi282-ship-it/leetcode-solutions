# Problem: Move Zeroes (Easy)

## Problem

Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

## Approach

Use a two-pointer approach.

Maintain an `index` pointing to the position where the next non-zero element should be placed.

Traverse the array:
- If the current element is non-zero, place it at `index`.
- Increment `index`.
- After processing all elements, fill the remaining positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The relative order of the non-zero elements is preserved while all zeroes are moved to the end.