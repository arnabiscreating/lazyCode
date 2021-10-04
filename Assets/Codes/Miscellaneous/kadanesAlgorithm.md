#### Kadane's Algorithm 
#### Language: C++ 
#### Platform: geeksforgeeks
#### Question Statement:
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Example 1:

Input:
N = 5

Arr[] = {1,2,3,-2,5}

Output:
9

Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

Example 2:

Input:
N = 4

Arr[] = {-1,-2,-3,-4}

Output:
-1

Explanation:
Max subarray sum is -1 
of element (-1)

<hr />

#### geeksforgeeks Link:
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


#### Solution:
```
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long curr=0;
        long long maxTillNow=INT_MIN;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            maxTillNow=max(maxTillNow,curr);
            
            if(curr<0){
                curr=0;
            }
        }
        return maxTillNow;
    }
};
```
