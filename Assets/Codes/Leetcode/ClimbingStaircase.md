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

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

### ✍️ Solution

class Solution {
public:
int climbStairs(int n) {
if(n==1)
return 1;
if(n==2)
return 2;
int a=1;
int b=2;
for(int i=3;i<=n;i++)
{
int c=a+b;
a=b;
b=c;
}

        return b;
    }

};
