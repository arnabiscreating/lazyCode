## Container With Most Water

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

✔️[LeetCode](https://leetcode.com/problems/container-with-most-water/)

### 📖 Statement

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

**Notice** that you may not slant the container.

### ✍️ Solution

```Python
class Solution:
    def maxArea(self, H: List[int]) -> int:
        ans, i, j = 0, 0, len(H)-1
        while (i < j):
            if H[i] <= H[j]:
                res = H[i] * (j - i)
                i += 1
            else:
                res = H[j] * (j - i)
                j -= 1
            if res > ans: 
                ans = res
        return ans
```

### 🤓 Explanation


We have to maximize the area between two vertical line. The area is calculated by considering the length of the shorter line and the breadth as the difference between both the lines. We use `two-pointers` method to solve this problem. WE take one pointer at the beginning of the array and other at the end. We compare the heights between these two points and move the pointer towards the right or left of the line whose height is smaller. At every iterations we calculate the area between both these pointers and save the maximum area between them.


**Time Complexity**: O(n)