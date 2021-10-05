#### Infix to Postfix 
#### Language: C++ 
#### Platform: geeksforgeeks
#### Question Statement:
Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

> *Infix expression*: The expression of the form a op b. When an operator is in-between every pair of operands.

> *Postfix expression*: The expression of the form a b op. When an operator is followed for every pair of operands.

Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -.

Example 1:

Input: str = "a+b*(c^d-e)^(f+g*h)-i"

Output: abcd^e-fgh*+^*+i-

Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be abcd^e-fgh*+^*+i-

Example 2:

Input: str = "A*(B+C)/D"

Output: ABC+*D/

Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be ABC+*D/
 
##### Expected Time Complexity: O(|str|).
##### Expected Auxiliary Space: O(|str|).

Constraints:
1 ≤ |str| ≤ 105

<hr />

#### geeksforgeeks Link:
https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1


#### Solution:
```
        class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    
    int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string s) {
 
    stack<char> st; //For stack operations, we are using C++ built in stack
    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if(c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(c == ')') {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        //If an operator is scanned
        else {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    return result;
}
};
```
