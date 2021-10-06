
#### Name: Merge Sorted Array
#### Language: Javascript
#### Platform: Leetcode
#### Question: https://leetcode.com/problems/merge-sorted-array/

#### Question Statement

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

Implement the Solution class:

- Use three pointers, one to track the position to be inserted i.e. last element of arr1.
- Remaining two will start iteration from last elements of both arr1 and arr2.
- Compare and update the larger element in the positions.
- Lastly, if any elements left in arr2, add them to arr1.
</hr>

#### Solution:
```
var mergeSortedArray = function(arr1,arr2,m,n) {
    let k = arr1.length - 1
    m--
    n--

    while(m>= 0 && n >= 0) {
        if(arr2[n] > arr1[m]) {
            arr1[k] = arr2[n]
            k--
            n--
        } else {
            arr1[k] = arr1[m]
            m--
            k--
        }

    }

    return arr1
};

/**
 * Function mergeSortedArray will be called as such:
 * mergeSortedArray([1,2,3,0,0,0],[2,5,6],3,3);
 */
```
