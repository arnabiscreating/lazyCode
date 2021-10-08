# Problem A1: Weak Typing - Chapter 1

## Language: `c++`

### Question Statement [link](https://www.facebook.com/codingcompetitions/hacker-cup/2021/qualification-round/problems/B)
### **Question Statement**

You're playing a game against an opponent on a grid of cells with NN rows and NN columns. All of the cells are initially empty, and both players normally take turns placing symbols in empty cells (with one player placing Xs and the other placing Os) until a row and/or column becomes entirely filled with one player's symbols (at which point the game ends with that player winning) or all of the cells have been filled without either player winning (in which case the game ends in a draw). Note that a player filling an entire diagonal with their symbols does not cause them to win.
This particular game is in the process of being played, with you placing Xs and your opponent placing Os. The current state of the cell in the ith row from the top and jth column from the left is one of the following:

In the game's current state, both players have made an equal number of turns (in other words, the number of Xs is the same as the number of Os), neither player has won yet, and the game has not yet ended in a draw (meaning that at least one cell is still empty).

Your opponent has just turned their back, giving you the opportunity to immediately place as many additional Xs on the board as you'd like, in any set of empty cells. Determine the minimum number of additional Xs you must place such that placing them would cause you to immediately win (due to a row and/or a column becoming entirely filled with Xs), if this is possible at all. If it is possible, you should also determine the number of different sets of cells in which that minimum number of Xs could be placed. Two sets of cells are considered to be different if either of them includes at least one cell which the other doesn't.

**Input**
Input begins with an integer T, the number of games you play against your opponent. For each game, there is first a line containing the integer N. Then, N lines follow, the iith of which contains the N characters C_{i,1..N}
​
**Output**
For the ith game, print a line containing "Case #i: " follow by "Impossible" if you cannot immediately win, or two integers if you can: the minimum number of additional Xs you must place to do so, and the number of different sets of cells in which that minimum number of Xs could be placed.
### **Solution**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, temp = 1;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string st[n];
        for (i = 0; i < n; i++)
            cin >> st[i];
        long long ans = 0;
        int flag = 1, dots = 0, mindots = INT_MAX, count = 1;
        for (i = 0; i < n; i++)
        {
            dots = 0, flag = 1;
            int x = 0;
            for (j = 0; j < n; j++)
            {
                if (st[i][j] == 'O')
                {
                    flag = 0;
                    break;
                }
                if (st[i][j] == '.')
                    dots++;
                else
                    x++;
            }
            if (x == n)
            {
                mindots = 0;
                if (count != 1)
                    count++;
            }
            else if (flag)
            {
                if (mindots > dots && dots != 0)
                {
                    count = 1;
                    mindots = dots;
                }
                else if (mindots == dots)
                    count++;
            }
        }
        for (i = 0; i < n; i++)
        {
            dots = 0, flag = 1;
            int x = 0;
            for (j = 0; j < n; j++)
            {
                if (st[j][i] == 'O')
                {
                    flag = 0;
                    break;
                }
                if (st[j][i] == '.')
                    dots++;
                else
                    x++;
            }
            if (x == n)
            {
                mindots = 0;
                if (count != 1)
                    count++;
            }
            else if (flag)
            {
                if (mindots > dots && dots != 0)
                {
                    count = 1;
                    mindots = dots;
                }
                else if (mindots == dots)
                {
                    int pos,currdot=0,currflag=1;
                    if(dots==1){
                    for (j = 0; j < n; j++)
                    {
                        if (st[j][i] == '.')
                            {
                                pos=j;
                                break;
                            }
                    }
                   for (j = 0; j < n; j++)
                    {
                        if (st[pos][j] == '.')
                            {
                                currdot++;
                            }
                        else if(st[pos][j]=='O')    
                              {
                                  currflag=0;
                                  break;
                              }
                    }
                    if(currdot==1&&currflag)
                     count--; 
                  }
                    count++;
                }
            }
        }
        if (mindots == INT_MAX)
            cout << "Case #" << temp++ << ": "
                 << "Impossible" << endl;
        else
            cout << "Case #" << temp++ << ": " << mindots << " " << count << endl;
    }
}
```