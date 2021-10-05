## Reverse Linked List

### 💻 Language-C++

<table>
    <tr>
        <td>✔️ C++</td>
        <td>  Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Plaform - Leetcode


### 📖 Statement

Given the head of a singly linked list, reverse the list, and return the reversed list.

### ✍️ Solution


     class Solution {
      public: 
   
      ListNode* reverseList(ListNode* head) {
       
       if(head==NULL||head->next=NULL)
            return head;
        ListNode *curr=head,*prev=NULL,*next=head->next;
        
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            if(next!=NULL){
                next=next->next;
            }
            
             }
        return prev;             
        }
      };

### 🤓 Explanation

Take 3 pointers curr,prev and next and run a iterative while loop till curr is not equal to NULL.Make the next of curr point to prev.Move prev and next one step forward.At conclusion ,the reversed linked list head will be at position where the prev is pointing that's why we return the prev pointer.
