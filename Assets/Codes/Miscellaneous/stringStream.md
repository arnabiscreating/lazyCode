## TITLE
Stringstream

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
✔️HackerRank

### 📖 Statement

stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. stringstream can be helpful in different type of parsing. 
Complete the parseInts function in the editor below.
parseInts has the following parameters:
string str: a string of comma separated integers

### ✍️ Solution

```
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> numberGrid;
    char comma;
    int number;
    while (ss >> number){
        numberGrid.push_back(number);
        ss >> comma;
    }
    return numberGrid;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
```