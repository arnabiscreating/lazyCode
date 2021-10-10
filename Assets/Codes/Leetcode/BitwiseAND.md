## TITLE

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
        <td>  Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

<!-- ### Question Plaform
(If platform is miscellaneous)
✔️AtCoder
Topcoder
SPOJ
-->

### 📖 Statement

Bitwise AND of Numbers Range

### ✍️ Solution
```
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
       int count=0;
        while(m != n){
            m>>=1;
            n>>=1;
            count++;
        }
        return m<<count;
    }
};
```
### 🤓 Explanation
We loop through the binary representation and in the lsbs of elements m and n if there is a 0 and 1 then the resultant value is 0,
so we shift the elements right till they are equal and keep the count of the number of zeroes. When both m and n are equal we get a value in lsb as 1. 
