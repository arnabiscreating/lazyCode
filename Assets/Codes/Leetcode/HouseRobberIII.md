## House Robber III

### 💻 Language(s)

<table>
    <tr>
        <td>✔️  C++</td>
        <td> Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Platform

✔️[LeetCode](https://leetcode.com/problems/house-robber-iii/)

### 📖 Statement

The thief has found himself a new place for his thievery again. There is only one entrance to this area, called root.Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that all houses in this place form a binary tree. It will automatically contact the police if two directly-linked houses were broken into on the same night.
Given the root of the binary tree, return the maximum amount of money the thief can rob without alerting the police.



### ✍️ Solution

```C++
class Solution {
public:
    pair<int,int>dfs(TreeNode *root)
    {
        
        if(!root) return {0,0};
        
        auto l= dfs(root->left);
        auto r= dfs(root->right);
        pair<int, int>ans;
        
        ans.first= max(l.first, l.second) + max(r.first, r.second);
        
        ans.second= root->val + l.first+ r.first;
        
        return ans;
    }
    int rob(TreeNode* root) {        
        auto f= dfs(root);
        return max(f.first, f.second);
    }
};
```

**Time Complexity**: O(n)
