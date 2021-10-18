## Longest Substring Without Repeating Characters

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

✔️[LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

### 📖 Statement

Given a string s, find the length of the longest substring without repeating characters.

### ✍️ Solution

```Python
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        right = 0
        ma = 0
        subset = set()
        while right<len(s):
            if s[right] not in subset:
                subset.add(s[right])
                right+=1
            else:
                while s[left] != s[right] and left<right:
                    subset.remove(s[left])
                    left+=1
                subset.remove(s[left])
                left+=1
            if right-left>ma:
                ma=right-left
        return ma
```

