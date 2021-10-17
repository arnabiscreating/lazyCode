## Search Insert Position

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

✔️[LeetCode](https://leetcode.com/problems/search-insert-position/)

### 📖 Statement

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.


### Example 
```language
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
```

### ✍️ Solution

```Java
  class Solution {
    public int searchInsert(int[] nums, int target) {
        int start =0;
    int end = nums.length -1;
    while(start<=end){
      int mid = (start+end)/2;
      if(target < nums[mid]){
        end = mid - 1;
      }
      else if(target > nums[mid]){
        start = mid + 1;
      }
      else{
        return mid;
      }
    }
    return start;
    }
}
```

**Time Complexity**: `O(log n)`
