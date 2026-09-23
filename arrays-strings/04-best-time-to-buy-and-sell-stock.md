# Problem: Best Time to Buy and Sell Stock (Easy)

## Approach

Keep track of the minimum price seen so far while traversing the
array. For each price, calculate the profit by subtracting the
minimum price from the current price.

If the current price is smaller than the minimum price, update the
minimum price.

Keep updating the maximum profit found.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The stock must be bought before it is sold, so we only calculate
profit using the minimum price seen before the current day.