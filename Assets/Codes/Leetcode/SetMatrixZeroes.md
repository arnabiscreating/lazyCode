## Set Matrix Zeroes

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

✔️[LeetCode](https://leetcode.com/problems/set-matrix-zeroes/)

### 📖 Statement

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.


### ✍️ Solution

```Java
    public void setZeroes(int[][] matrix) {
        
        boolean fr = false, fc = false;
        
        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[0].length; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                    if(i == 0) fr = true;
                    if(j == 0) fc = true;
                }
            }
        }
        
        for(int i = 1; i < matrix.length; i++){
            for(int j = 1; j < matrix[0].length; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(fc){
            for(int i = 0; i < matrix.length; i++){
                matrix[i][0] = 0;
            }
        }
        
        if(fr){
            for(int j = 0; j < matrix[0].length; j++){
                matrix[0][j] = 0;
            }
        }
        
        return;
    }
```

**Time Complexity**: O(n^2)
**Space Complexity**: O(1)