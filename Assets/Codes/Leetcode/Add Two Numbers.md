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

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 <img src = "https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg" alt = "Example">

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.

### ✍️ Solution



    class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            struct ListNode* H1 = l1;
            // struct ListNode* H2 = l2;
            int count1 = 0;
            int count2 = 0;
            int sum,carry=0,rem;
            struct ListNode* Node = new struct ListNode;
            struct ListNode* Result = Node;

            while(H1!=NUL){
               H1 = H1->next;
                count1++;
            }
            H1 = l2;

            while(H1!=NULL){
               H1 = H1->next;
                count2++;
            }

            if(count1 >= count2){
                count1++;
                while(l1 != NULL){
                    if(l2 == NULL){
                        sum = l1->val + carry;
                        l1 = l1->next;
                        carry = 0;
                    }
                    else{
                        sum = l1->val + l2->val + carry;
                        l2 = l2->next;
                        l1 = l1->next;
                        carry = 0;
                    }
                    if(sum > 9){
                        carry = sum/10;
                       rem = sum % 10;
                    }
                    else{
                        rem = sum;
                    }
                    if(count1 != 0){
                        Result->next = new struct ListNode(rem);
                        Result = Result->next;
                    }
                    count1--;
                }
                Node = Node -> next;
                if(carry>0){
                    Result->next = new struct ListNode(carry);
                }
            }
            else{
                count2++;
                while(l2 != NULL){
                    if(l1 == NULL){
                        sum = l2->val + carry;
                        l2 = l2->next;
                        carry = 0;
                    }
                    else{
                        sum = l1->val + l2->val + carry;
                        l2 = l2->next;
                        l1 = l1->next;
                        carry = 0;
                    }
                    if(sum > 9){
                        carry = sum/10;
                       rem = sum % 10;
                    }
                    else{
                        rem = sum;
                    }
                    if(count2 != 0){
                        Result->next = new struct ListNode(rem);
                        Result = Result->next;
                    }
                    count2--;
                }
                Node = Node -> next;
                if(carry>0){
                    Result->next = new struct ListNode(carry);
                }
            }


        return Node;

        }
    };
