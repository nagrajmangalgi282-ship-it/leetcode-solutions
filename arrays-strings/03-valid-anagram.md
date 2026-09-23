# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

We compare the character frequencies of both strings.

If the strings have different lengths, they cannot be anagrams.

We use an integer array of size 26 to count the frequency of each lowercase English letter. For every character in `s`, we increase its count, and for every character in `t`, we decrease its count.

If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The problem contains lowercase English letters only, so an array of 26 integers is sufficient.