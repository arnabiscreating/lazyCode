## Best Time To Buy And Sell Stock

### 💻 Language(s)

<table>
    <tr>
        <td>  C++</td>
        <td>✔️ Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### 📖 Statement

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


### ✍️ Solution

```Python
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left = 0 
        right = left+1
        buy= 10**5
        sell = -1
        maxprof = 0
        while right<len(prices):
            if prices[left]<prices[right]:
                maxprof = max(maxprof, prices[right]-prices[left])
                right+=1
            else:
                left =right
                right+=1
        return maxprof
```

**Time Complexity**: O(n)