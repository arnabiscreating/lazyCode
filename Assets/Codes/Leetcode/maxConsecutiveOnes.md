## Max Consecutive Ones

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

### 📖 Statement

Given a binary array nums, return the maximum number of consecutive 1's in the array.

### ✍️ Solution

```
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        mxCount = 0
        for num in nums:
            if num==1:
                count+=1
                mxCount = max(count, mxCount)
            else:
                count=0
        return mxCount
```
