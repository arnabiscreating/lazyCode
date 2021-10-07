## Longest Palindromic Subsequence

### 💻 Language(s)

<table>
    <tr>
        <td> C++</td>
        <td> Python</td>
        <td>✔️ Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/longest-palindromic-subsequence/)

### 📖 Statement

Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.


### ✍️ Solution

```Java
  public int longestPalindromeSubseq(String s) {
      int n = s.length();
      int [][] dp = new int[n][n];
      for(int gap = 0; gap < n; gap++){
          for(int i = 0, j = gap; i < n && j < n; i++, j++){
              if(gap == 0) dp[i][j] = 1;
              else{
                  char ch1 = s.charAt(i);
                  char ch2 = s.charAt(j);
                  if(ch1 == ch2){
                      dp[i][j] = dp[i+1][j-1]+2;
                  }else{
                      dp[i][j] = Math.max(dp[i][j-1], dp[i+1][j]);
                  }
              }
          }
      }
      
      
      return dp[0][n-1]; 
  }
```

**Time Complexity**: O(n^2)
**Space Complexity**: O(n^2)