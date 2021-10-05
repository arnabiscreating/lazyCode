#### Swapping Nodes in a Linked List
#### Language: C++ 
#### Platform: LeetCode
#### Question Statement:
You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

Example 1:

Input: head = [1,2,3,4,5], k = 2

Output: [1,4,3,2,5]

Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5

Output: [7,9,6,6,8,7,3,0,9,5]

Example 3:

Input: head = [1], k = 1

Output: [1]

Constraints:

- The number of nodes in the list is n.
- 1 <= k <= n <= 105
- 0 <= Node.val <= 100
 
<hr />

#### LeetCode Link:
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


#### Solution:
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void swap(int i,int j,vector<int>&v){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* rebuild=head;
        vector<int>v;
        int count=0;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        swap(k-1,count-k,v);
        int i=0;
        while(rebuild){
            rebuild->val=v[i];
            i++;
            rebuild=rebuild->next;
        }
        return head;
    }
};
```
