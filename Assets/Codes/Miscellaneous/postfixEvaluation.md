#### Evaluation of Postfix Expression 
#### Language: C++ 
#### Platform: geeksforgeeks
#### Question Statement:
Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. Operators will only include the basic arithmetic operators like *, /, + and -.

Example 1:

Input: S = "231*+9-"

Output: -4

Explanation:
After solving the given expression, 
we have -4 as result.

Example 2:

Input: S = "123+*8-"

Output: -3

Explanation:
After solving the given postfix 
expression, we have -3 as result.

##### Expected Time Complexity: O(|S|)
##### Expected Auixilliary Space: O(|S|)

Constraints:
1 ≤ |S| ≤ 105

<hr />

#### geeksforgeeks Link:
https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1#


#### Solution:
```
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
    stack<int> st;
    int op1, op2;

    for (int i = 0; i <= s.length()-1; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}
};
```
