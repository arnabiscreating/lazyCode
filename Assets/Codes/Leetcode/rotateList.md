#### Rotate List 
#### Language: C++ 
#### Platform: LeetCode
#### Question Statement:
Given the head of a linked list, rotate the list to the right by k places.

Example 1:

Input: head = [1,2,3,4,5], k = 2

Output: [4,5,1,2,3]

Explanation: 

##### Rotate 1: <br> 5 -> 1 -> 2 -> 3 -> 4
##### Rotate 2:<br> 4 -> 5 -> 1 -> 2 -> 3

Constraints:

- The number of nodes in the list is in the range [0, 500].
- -100 <= Node.val <= 100
- 0 <= k <= 2 * 109
<hr />

#### LeetCode Link:
https://leetcode.com/problems/rotate-list/


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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || k==0){
            return head;
        }
        int len=1;
        ListNode* node=head;
        while (node->next!=NULL){
            node = node->next;
            len++;
        }
        ListNode* p=head;  
        int n=k%len;
        for(int i=0; i<len-n-1; i++){
            p=p->next;
        }
        node->next = head;
        head=p->next;
        p->next=NULL;
        return head;
    }
};
```
