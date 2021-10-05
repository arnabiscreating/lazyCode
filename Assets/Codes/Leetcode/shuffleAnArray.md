
#### Name: Shuffle an Array
#### Language: C++
#### Platform: Leetcode
#### Question: https://leetcode.com/problems/shuffle-an-array/

#### Question Statement

Given an integer array nums, design an algorithm to randomly shuffle the array. All permutations of the array should be equally likely as a result of the shuffling.

Implement the Solution class:

- Solution(int[] nums) Initializes the object with the integer array nums.
- int[] reset() Resets the array to its original configuration and returns it.
- int[] shuffle() Returns a random shuffling of the array.
</hr>

#### Solution:
```class Solution {
private:
    vector<int> n;
public:
    Solution(vector<int>& nums) {
        n=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return n;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> s=n;   
        for (int i = s.size() - 1; i >= 0; i--) {
            int r = rand() % (i+1);
            swap(s[i], s[r]);
        }
        
        return s;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
```
