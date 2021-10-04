
Name: isPalindrome
Language: Java
Platform: Leetcode
Question: 

https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

Example 1:

Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column
Example 2:

Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 3:

Input: matrix = [[7,8],[1,2]]
Output: [7]
Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 4:

Input: matrix = [[3,6],[7,1],[5,2],[4,8]]
Output: []
Explanation: There is no lucky number.

class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        
        ArrayList<Integer> list = new ArrayList<>();

        for (int i = 0; i < matrix.length; ++i) {
            
            int minCol = minInCol(matrix,i);
            int maxRow = matrix[i][minCol];
            if (maxInRow(matrix,minCol,maxRow)) {
                list.add(maxRow);
            }
        }

        return list;
    }
    
    static int minInCol(int[][] matrix,int i){

        int k = 0,minCol = matrix[i][k];

        for (int j = 1; j < matrix[i].length; ++j) {

            if (matrix[i][j] < minCol) {
                minCol = matrix[i][j];
                k = j;
            }    
        }

        return k;
    }

    static boolean maxInRow(int[][] matrix,int minCol,int maxRow){

        for (int i = 0; i < matrix.length; ++i) {
            if (matrix[i][minCol] > maxRow) {
                return false;
            }
        }

        return true;
    }
}