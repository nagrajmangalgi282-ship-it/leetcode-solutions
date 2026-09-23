# Problem: Valid Parentheses (Easy)

## Problem

Given a string containing brackets, determine if the brackets are valid and properly matched.

## Approach

Use a stack to keep track of opening brackets.

For every character:
- If it is an opening bracket, push it onto the stack.
- If it is a closing bracket, check whether the top of the stack contains the matching opening bracket.
- If it does not match, return false.
- After processing all characters, the stack must be empty for the string to be valid.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

A stack is useful because the most recently opened bracket must be the first one to be closed.