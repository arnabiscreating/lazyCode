
Name: Reshape the matrix
Language: Java
Platform: Leetcode
Question: 

https://leetcode.com/problems/reshape-the-matrix/

In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.
You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

Example 1:
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
Example 2:

Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]] */

class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        
        int row = mat.length,col = mat[0].length,size = row * col;
        
        if(size != r*c || row == r) return mat;
        
        int[][] ans = new int[r][c];
        
        int r1 = 0,c1 = 0;
        
        for(int i =0;i<mat.length;++i){
            
            for(int j = 0;j<mat[0].length;++j){
                
                ans[r1][c1++] = mat[i][j];
                
                if(c1 == c){
                    c1 = 0;
                    r1++;
                }
            }
        }
        
        return ans;
    }
}