# Chess Tournament

## Language: `C++`

### Question Statement [link](https://codeforces.com/contest/1569/problem/B)

&nbsp;

### **Question Statement**

A chess tournament will be held soon, where n chess players will take part. Every participant will play one game against every other participant. Each game ends in either a win for one player and a loss for another player, or a draw for both players.

Each of the players has their own expectations about the tournament, they can be one of two types:

1. A player wants not to lose any game (i. e. finish the tournament with zero losses);
2. A player wants to win at least one game.
  
You have to determine if there exists an outcome for all the matches such that all the players meet their expectations. If there are several possible outcomes, print any of them. If there are none, report that it's impossible.

**Input**

The first line contains a single integer t (1≤t≤200) — the number of test cases.

The first line of each test case contains one integer n (2≤n≤50) — the number of chess players.

The second line contains the string s (|s|=n; si∈{1,2}). If si=1, then the i-th player has expectations of the first type, otherwise of the second type.

**Output**

For each test case, print the answer in the following format:

In the first line, print NO if it is impossible to meet the expectations of all players.

Otherwise, print YES, and the matrix of size n×n in the next n lines.

The matrix element in the i-th row and j-th column should be equal to:

- +, if the i-th player won in a game against the j-th player;
- -, if the i-th player lost in a game against the j-th player;
- =, if the i-th and j-th players' game resulted in a draw;
- X, if i=j.

### **Solution**

```cpp
#include <bits/stdc++.h>
using namespace std;
 
void Solve();
 
int main() {

    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        Solve();
    }
 
    return 0;
}
 
void Solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    char array[50][50];
    int check[50];
 
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            check[i] = 1;
        }
        else{
            check[i] = 0;
        }
    }
 
    for(int i = 0; i < n; i++){
        for(int j = i ; j < n; j++){
 
            if(i == j){
                array[i][j] = 'X';
            }
 
            //either we can do draw or make i win
            else if(s[i] == '1'){
                array[i][j] = '=';
                array[j][i] = '=';
            }
 
 
            else if(s[i] == '2'){
                //1 means it has already won once
                //0 means it needs a win
 
                //we make it lose if already having 1 win
                if(check[i] == 1){
                    array[i][j] = '-';
                    array[j][i] = '+';
                    check[j] = 1;
                }
 
                else{
                    //if both need just a draw, then we keep it in drawn
                    if(s[j] == '1'){
                        array[i][j] = '=';
                        array[j][i] = '=';
                    }
                    // i needs a win and also j needs one win
                    else{
                        check[i] = 1;
                        array[i][j] = '+';
                        array[j][i] = '-';
                    }
                }
 
            }
        }
    }
 
    for(int i = 0; i < n; i++){
        if(check[i] == 0){
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;
 
    for (int i = 0; i < n; ++i) {
 
        for (int j = 0; j < n; ++j) {
            cout << array[i][j];
        }
 
        cout << endl;
    }
}
```
