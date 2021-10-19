## Find Smallest Letter Greater Than Target

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

✔️[LeetCode](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

### 📖 Statement

Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.

Note that the letters wrap around.

For example, if target == `'z'` and letters == `['a', 'b']`, the answer is `'a'`.


### Example 
```c++
Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
```

### ✍️ Solution

```Java
  class Solution {
 public char nextGreatestLetter(char[] letters, char target) {
        
    int start = 0;
      int end  = letters.length - 1;
      
      while(start <= end){
        
        int mid = (start + end)/2;
        //if target element is less than middle element 
        if(target < letters[mid] ){
          end = mid -1;
        }
        //target element is greater than mid element
        else {
          start = mid +1;
        }
        
      }
      return letters[start%letters.length];

    }


}
```

**Time Complexity**: `O(log n)`