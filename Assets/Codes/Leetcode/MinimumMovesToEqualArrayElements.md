## Minimum moves to equal array elements

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

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)

### 📖 Statement

Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment n - 1 elements of the array by 1.
```
Example 1:

Input: nums = [1,2,3]
Output: 3

Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

Example 2:

Input: nums = [1,1,1]
Output: 0
```
### ✍️ Solution
```
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minimum_value = INT_MAX, sum_elements = 0, n = nums.size();
        for(auto num : nums){
            minimum_value = min(minimum_value, num);
            sum_elements += num;
        }
        int result = sum_elements - n*minimum_value;
        return result;
    }
};
```
