# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We use two nested loops to check every possible pair of elements in the array. 
If the sum of two elements is equal to the target, we return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The answer requires the indices of the two numbers, not the numbers themselves.
The second loop starts from `i + 1` so that we do not use the same element twice.