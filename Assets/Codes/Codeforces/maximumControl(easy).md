# Maximum Control (easy)

## Language: `c++`

### Question Statement [link](https://codeforces.com/contest/958/problem/B1)

&nbsp;

### **Question Statement**

The Resistance is trying to take control over all planets in a particular solar system. This solar system is shaped like a tree. More precisely, some planets are connected by bidirectional hyperspace tunnels in such a way that there is a path between every pair of the planets, but removing any tunnel would disconnect some of them.

The Resistance already has measures in place that will, when the time is right, enable them to control every planet that is not remote. A planet is considered to be remote if it is connected to the rest of the planets only via a single hyperspace tunnel.

How much work is there left to be done: that is, how many remote planets are there?

**Input**
The first line of the input contains an integer N (2 ≤ N ≤ 1000) – the number of planets in the galaxy.

The next N - 1 lines describe the hyperspace tunnels between the planets. Each of the N - 1 lines contains two space-separated integers u and v (1 ≤ u, v ≤ N) indicating that there is a bidirectional hyperspace tunnel between the planets u and v. It is guaranteed that every two planets are connected by a path of tunnels, and that each tunnel connects a different pair of planets.

**Output**
A single integer denoting the number of remote planets.

### **Solution**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,res = 0;
    cin>>t;
    vector<int> vals;
    for(int i=0; i<t-1; i++){
        int a,b;
        cin>>a>>b;
        vals.push_back(a);
        vals.push_back(b);
    }
    for(int j=0; j<vals.size(); j++){
        if(count(vals.begin(), vals.end(), j+1) == 1){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
```
