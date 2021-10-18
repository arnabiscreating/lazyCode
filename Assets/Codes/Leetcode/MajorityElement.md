## Majority Element

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
        <td> Python</td>
        <td> Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/majority-element/)

### 📖 Problem Statement

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

### ✍️ Solution

```C++
  class Solution {
public:
    int countInRange(vector<int> &nums, int num, int lo, int hi){
        int count= 0;
        for(int i = lo;i<=hi;i++){
            if(nums[i]==num){
                count++;
            }
        }
        return count;
    }
    int majorityElementRec(vector<int> &nums,int lo, int hi){
        if(lo==hi){
            return nums[lo];
        }
        
        int mid = (hi-lo)/2 + lo;
        int left = majorityElementRec(nums,lo,mid);
        int right = majorityElementRec(nums, mid+1, hi);
        
        if(left==right){
            return left;
        }
        
        int leftCount = countInRange(nums, left,lo,hi);
        int rightCount = countInRange(nums, right, lo,hi);
        return leftCount > rightCount ? left : right;
    }
    int majorityElement(vector<int>& nums) {
         return majorityElementRec(nums, 0, nums.size()-1);
    }
};
```

### Explaination
We use Divide and Conquer approach to solve this problem. We take note of two indices lo and hi to pass the slice of array.If we know the majority element in the left and right halves of array, we can find the majority element<br> 

Here, we apply a classical divide & conquer approach that recurses on the left and right halves of an array until an answer can be trivially achieved for a length-1 array. Note that because actually passing copies of subarrays costs time and space, we instead pass lo and hi indices that describe the relevant slice of the overall array. In this case, the majority element for a length-1 slice is trivially its only element, so the recursion stops there. If the current slice is longer than length-1, we must combine the answers for the slice's left and right halves. If they agree on the majority element, then the majority element for the overall slice is obviously the same[1]. If they disagree, only one of them can be "right", so we need to count the occurrences of the left and right majority elements to determine which subslice's answer is globally correct. 

**Time Complexity**: O(nlogn) where n is the length of string
