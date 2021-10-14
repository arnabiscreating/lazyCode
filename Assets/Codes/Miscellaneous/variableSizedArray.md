## TITLE
Variable Sized Array

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
✔️HackerRank

### 📖 Statement

Consider an n-element array, , where each index i in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.
Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.

### ✍️ Solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int numberOfElements, queries, sizeOfElement, m, n;
    cin >> numberOfElements >> queries;
    std::vector< vector<int> > numberGrid(numberOfElements);
    for (int i = 0; i < numberOfElements; i++){
        cin >> sizeOfElement;
        numberGrid[i] = vector<int>(sizeOfElement);
        for (int j = 0; j < sizeOfElement; j++){
            cin >> numberGrid[i][j];
        }  
    }
    for (int i = 0; i < queries; i++){
         cin >> m >> n;
         cout << numberGrid[m][n] << endl;
    }
    return 0;
}
```