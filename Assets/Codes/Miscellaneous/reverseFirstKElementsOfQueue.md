#### Reverse First K elements of Queue 
#### Language: C++ 
#### Platform: geeksforgeeks
#### Question Statement:
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

##### Only following standard operations are allowed on queue.

- enqueue(x) : Add an item x to rear of queue

- dequeue() : Remove an item from front of queue

- size() : Returns number of elements in queue.

- front() : Finds front item.


Example 1:

Input:
5 3<br>
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.


Example 2:

Input:
4 4<br>
4 3 2 1

Output: 
1 2 3 4

Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.

##### Expected TIme Complexity : O(n)
##### Expected Auxilliary Space : O(n)

Constraints:
1 <= N <= 1000<br>
1 <= K <= N

<hr />

#### geeksforgeeks Link:
https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#


#### Solution:
```
//Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    
    stack<int> Stack;
    
    if (q.empty() == true || k > q.size())
        return q;
    if (k <= 0)
        return q;
 
    /* Push the first K elements
       into a Stack*/
    for (int i = 0; i < k; i++) {
        Stack.push(q.front());
        q.pop();
    }
 
    /* Enqueue the contents of stack
       at the back of the queue*/
    while (!Stack.empty()) {
        q.push(Stack.top());
        Stack.pop();
    }
 
    /* Remove the remaining elements and
       enqueue them at the end of the Queue*/
    for (int i = 0; i < q.size() - k; i++) {
        q.push(q.front());
        q.pop();
    }
    
    return q;
}
```
