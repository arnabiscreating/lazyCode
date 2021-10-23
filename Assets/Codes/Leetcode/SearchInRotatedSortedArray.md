## TITLE

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

<!-- ### Question Plaform
(If platform is miscellaneous)
✔️AtCoder
Topcoder
SPOJ
-->

### 📖 Statement

Search in Rotated Sorted Array

### ✍️ Solution
```
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0;
        int r= n-1;
        if(n==0){
            if(nums[0]==target){
                return 0;
            }
            return -1;
            
        }
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[r]>nums[l]){
                if(nums[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }else if(nums[mid]>=nums[l]){
                if(nums[mid]>target && nums[l]<=target){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }else{
                if(nums[mid]<target && nums[r]>=target){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};

```
