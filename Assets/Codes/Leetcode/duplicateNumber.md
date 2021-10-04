#### Find the Duplicate Number

#### Language: C++ 
#### Level: Medium 
#### Question Statement:
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
<hr />

#### Leetcode Link:
https://leetcode.com/problems/find-the-duplicate-number/


#### Solution:
```
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
```
