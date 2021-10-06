## Middle of the Linked List

### 💻 Language(s)-C++

<table>
    <tr>
        <td>✔️ C++</td>
        <td>  Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform-Leetcode   
  Problem Link-https://leetcode.com/problems/middle-of-the-linked-list/



### 📖 Statement

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

### ✍️ Solution
      
      
      class Solution {
            public:
            ListNode* middleNode(ListNode* head) {
             ListNode* slow = head;
              ListNode* fast = head;
            while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
                 }
               return slow;
            }
          };

### 🤓 Explanation

When traversing the list with a pointer slow, make another pointer fast that traverses twice as fast. When fast reaches the end of the list,
slow must be in the middle.
