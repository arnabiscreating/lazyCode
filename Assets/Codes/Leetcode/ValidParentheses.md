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

Valid Parentheses

### ✍️ Solution
```
class Solution {
public:
    bool arepair(char a, char b){
        if(a=='(' && b==')') return true;
        else if(a=='{' && b=='}') return true;
        else if(a=='[' && b==']') return true;
        
        return false;
    }
    
    bool isValid(string x) {
        stack<char> s;
        for(auto a: x){
            if(a=='(' || a=='[' || a=='{'){
                s.push(a);
            }else if(a==')' || a==']' || a=='}'){
                if(s.empty() || !arepair(s.top(),a) ){
                    return false;
                }else{
                    s.pop();
                }
            }
        }
        return s.empty()?true:false;        
    }
};
```
