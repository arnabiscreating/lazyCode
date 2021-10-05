# Do not be distracted

## Language: `C++`

### Question Statement [link](https://codeforces.com/contest/1520/problem/A)

&nbsp;

### **Question Statement**

olycarp has 26 tasks. Each task is designated by a capital letter of the Latin alphabet.

The teacher asked Polycarp to solve tasks in the following way: if Polycarp began to solve some task, then he must solve it to the end, without being distracted by another task. After switching to another task, Polycarp cannot return to the previous task.

Polycarp can only solve one task during the day. Every day he wrote down what task he solved. Now the teacher wants to know if Polycarp followed his advice.

For example, if Polycarp solved tasks in the following order: "DDBBCCCBBEZ", then the teacher will see that on the third day Polycarp began to solve the task 'B', then on the fifth day he got distracted and began to solve the task 'C', on the eighth day Polycarp returned to the task 'B'. Other examples of when the teacher is suspicious: "BAB", "AABBCCDDEEBZZ" and "AAAAZAAAAA".

If Polycarp solved the tasks as follows: "FFGZZZY", then the teacher cannot have any suspicions. Please note that Polycarp is not obligated to solve all tasks. Other examples of when the teacher doesn't have any suspicious: "BA", "AFFFCC" and "YYYYY".

Help Polycarp find out if his teacher might be suspicious.

**Input**
The first line contains an integer t (1≤t≤1000). Then t test cases follow.

The first line of each test case contains one integer n (1≤n≤50) — the number of days during which Polycarp solved tasks.

The second line contains a string of length n, consisting of uppercase Latin letters, which is the order in which Polycarp solved the tasks.

**Output**
For each test case output:

"YES", if the teacher cannot be suspicious;
"NO", otherwise.
You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as positive answer).

### **Solution**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int t,index=0, nindex = 0,n;

    cin>>t;
    string istr;
    for (int i=0; i<t; i++){
        cin>>n;
        cin>>istr;
        bool lock=true;
        for(int j=0; j<istr.length(); j++){
            nindex = istr.find(istr.substr(j,1),j+1);
            if(nindex-j != 1 && nindex-j < 51 && nindex > -1){
                cout << "NO" << endl;
                lock = false;
                break;
        }
    }
        if(lock){
            cout << "YES" << endl;
        }
    }

    return 0;
}
```
