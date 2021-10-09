# Problem B: Traffic Control

## Language: `c++`

### Question Statement [link](https://www.facebook.com/codingcompetitions/hacker-cup/2021/round-1/problems/B)
### **Question Statement**

In the rapidly growing towns of Silicon Valley, traffic congestion is becoming a major problem. The governor has contracted Travis, the rock star traffic engineer, to come up with some solutions.
A town consists of N horizontal streets and M vertical avenues, making up NxM intersections. Each intersection has some wait time, which is an integer number of seconds between 1 and 1000, inclusive. The town's wait times can thus be represented as a grid with N rows and M columns of integers.
A route within the grid consists of a sequence of one or more intersections, such that each pair of consecutive intersections are either horizontally or vertically adjacent to one another. The duration of a route is the sum of all of its intersections' wait times.
Travis is tasked with assigning valid wait times for all N*M intersections. However, he must be careful in his choices. Routes too slow will lead to congestion, and routes too fast will lead to accidents. After careful calculations, Travis has determined that that an optimal grid must simultaneously satisfy the following two benchmark conditions based off the four corners of the town:
The duration of the fastest route starting in the top-left intersection and ending in the bottom-right one is exactly AA seconds, and
the duration of the fastest route starting in the top-right intersection and ending in the bottom-left one is exactly BB seconds.
Please help Travis generate any such valid grid, or determine that no such grid exists.

**Input**
Input begins with an integer T, the number of towns that Travis is contracted for. For each town, there is a single line containing the 4 space-separated integers N, M, A, and B.

**Output**
For the ith town, first print a line containing "Case #i: " followed by either the string "Possible" or "Impossible". If possible, this should be followed NN rows of M space-separated integers each, comprising your chosen grid of intersection wait times in seconds.

### **Solution**

```cpp
#include <bits/stdc++.h>
using namespace std;

void printmt(int n, int m, int a, int b)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == 0 && j == 0 )
                cout << a - n - m + 2<<" ";
            else if(i == n - 1 && j == 0)    
                  cout << b - n - m +2<<" ";
                  else 
                   cout<<"1 ";
        }
        cout << endl;
    }
}

int main()
{
    int t, n, j, temp = 1;
    cin >> t;

    while (t--)
    {
        int m, a, b;
        cin >> n >> m >> a >> b;
        if ((n + m - 1) > a || (n + m - 1) > b)
            cout << "Case #" << temp << ": Impossible" << endl;
        else
        {
            cout << "Case #" << temp << ": Possible" << endl;
            printmt(n, m, a, b);
        }
        temp++;
    }
}
```
