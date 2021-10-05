#### Queue Reversal
#### Language: C++ 
#### Platform: geeksforgeeks
#### Question Statement:
Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue.

Example 1:

Input:
6 

4 3 1 10 2 6

Output: 
6 2 10 1 3 4

Explanation: 
After reversing the given
elements of the queue , the resultant
queue will be 6 2 10 1 3 4.

Example 2:

Input:
4<br>
4 3 2 1 

Output: 
1 2 3 4

Explanation: 
After reversing the given
elements of the queue , the resultant
queue will be 1 2 3 4.

##### Expected Time Complexity : O(n)
##### Expected Auxilliary Space : O(n)

Constraints:
1 ≤ N ≤ 105<br>
1 ≤ elements of Queue ≤ 105

<hr />

#### geeksforgeeks Link:
https://practice.geeksforgeeks.org/problems/queue-reversal/1


#### Solution:
```
//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
        
    stack<int> stack;
    while (!q.empty()) {
        stack.push(q.front());
        q.pop();
    }
    while (!stack.empty()) {
        q.push(stack.top());
        stack.pop();
    }
    return q;
    
}
```
