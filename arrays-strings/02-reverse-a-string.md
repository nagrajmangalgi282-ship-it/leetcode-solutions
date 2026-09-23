# Problem: Reverse String (Easy)

## Problem
Write a function that reverses a string.

The input string is given as an array of characters.

The input array must be modified in-place using O(1) extra memory.

## Approach

Use the two-pointer technique.

- Set one pointer at the beginning of the array.
- Set another pointer at the end.
- Swap the characters at both pointers.
- Move the left pointer forward.
- Move the right pointer backward.
- Continue until the pointers meet.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The string is reversed in-place, so no additional array is required.