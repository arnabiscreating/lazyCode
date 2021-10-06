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

Given a string s, return the longest palindromic substring in s.

### ✍️ Solution

```
class Solution {
public:
    
    
    int t[1001][1001];
    string lcs(string a, string b, int n){
        int maxi=0;
        string res;
        vector<int> v;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0) t[i][j];
                else if(a[i-1]==b[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                    if(t[i][j]>maxi){
                        string temp = a.substr(i-t[i][j], t[i][j]);
                        string rev = string(temp.rbegin(),temp.rend());
                        if(rev==temp){
                            maxi = t[i][j];
                            res = temp;
                        }
                    }
                }else{
                   t[i][j] = 0;
                }
            }
        }
       return res;
        
    }
    
    string longestPalindrome(string s) {
        string a = s;
        string str="";
        int n = s.length();
        reverse(s.begin(),s.end());
        
        return lcs(a,s,n);
     
        
    }
};
```

### 🤓 Explanation

DP
