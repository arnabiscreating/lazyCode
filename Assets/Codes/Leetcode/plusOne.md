## Plus One

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

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

### ✍️ Solution

```
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ans=0
        n=len(digits)
        res=[]
        for i,L in enumerate(digits):
            ans+=L*(10**(n-1-i))
        ans=ans+1
        for num in str(ans):
            res.append(int(num))
        return res
 ```
