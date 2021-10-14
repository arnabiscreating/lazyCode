## TITLE
Struct

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
✔️HackerRank

### 📖 Statement

You have to create a struct, named Student, representing the student's details, as mentioned above, and store the data of a student.
Input Format
Input will consist of four lines. 
The first line will contain an integer, representing age. 
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student. 
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student. 
The fourth line will contain an integer, representing the standard of student.

### ✍️ Solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
```