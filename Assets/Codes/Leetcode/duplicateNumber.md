#### Find the Duplicate Number

#### Language: C++

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
    vector<int> findDuplicates(vector<int>& arr) {

        vector<int> ans;

        for(int i=0;i<arr.size();i++)
        {

         if(arr[ abs(arr[i])-1]<0)
              ans.push_back(abs(arr[i]));
           arr[ abs(arr[i])-1]*=-1;

           // cout<<arr[i]<<endl;
        }
        return ans;
    }
};
```
