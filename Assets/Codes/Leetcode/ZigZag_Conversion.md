## Zig-Zag Conversion

### 💻 Language(s)

<table>
    <tr>
        <td> C++</td>
        <td>✔️ Python</td>
        <td> Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/zigzag-conversion/)

### 📖 Problem Statement

Given a string s, find the longest palindromic subsequence's length in s.

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
```
P   A   H   N
A P L S I I G
Y   I   R
```

### ✍️ Solution

```Python
  def convert(s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        count = 0
        result = [[] for _ in range(numRows)]
        flag = 1
        for i in range(len(s)):
            if count < numRows:
                result[count].append(s[i])
                if flag:
                    count+=1
                else:
                    count-=1
            if count==numRows:
                count-=2
                flag=0
            if count==0:
                flag=1
        return ''.join([i for j in result for i in j])
```

### Explaination
To solve this problem, we iterate though the string from left to right so we can determine which character belongs to which row in the ZigZag pattern.<br> 
There is an edge case though, if the number of rows is 1, the whole string will be printed in a single row. Therefore we just return the original string there.<br>
We make an empty multidimensional list with number of empty lists being equal to number of rows. Say if we have 3 rows then it looks like: 
```
[[], [], []]
```
Iterate through the string appending each character to the appropriate row (list). When we reach the uppermost or the lowermost row, we change a flag variable to 
!flag to change the direction in which we proceed, continuing the iteration through the string.

**Time Complexity**: O(n) where n is the length of string
