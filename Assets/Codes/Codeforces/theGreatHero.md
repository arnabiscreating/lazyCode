# The Great Hero

## Language: `C++`

### Question Statement [link](https://codeforces.com/contest/1480/problem/B)

&nbsp;

### **Question Statement**

The great hero guards the country where Homer lives. The hero has attack power A and initial health value B. There are n monsters in front of the hero. The i-th monster has attack power ai and initial health value bi.

The hero or a monster is said to be living, if his or its health value is positive (greater than or equal to 1); and he or it is said to be dead, if his or its health value is non-positive (less than or equal to 0).

In order to protect people in the country, the hero will fight with monsters until either the hero is dead or all the monsters are dead.

In each fight, the hero can select an arbitrary living monster and fight with it. Suppose the i-th monster is selected, and the health values of the hero and the i-th monster are x and y before the fight, respectively. After the fight, the health values of the hero and the i-th monster become x−ai and y−A, respectively.
Note that the hero can fight the same monster more than once.

For the safety of the people in the country, please tell them whether the great hero can kill all the monsters (even if the great hero himself is dead after killing the last monster).

**Input**

Each test contains multiple test cases. The first line contains t (1≤t≤10^5) — the number of test cases. Description of the test cases follows.

The first line of each test case contains three integers A (1≤A≤10^6), B (1≤B≤10^6) and n (1≤n≤10^5) — the attack power of the great hero, the initial health value of the great hero, and the number of monsters.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤10^6), where ai denotes the attack power of the i-th monster.

The third line of each test case contains n integers b1,b2,…,bn (1≤bi≤10^6), where bi denotes the initial health value of the i-th monster.

It is guaranteed that the sum of n over all test cases does not exceed 10^5.

**Output**

For each test case output:

"YES", if the teacher cannot be suspicious;
"NO", otherwise.
You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as positive answer).

### **Solution**

```cpp
// Solution by LazyCoder-1506
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve() {
  ll hatt, hdef, n;
  cin >> hatt >> hdef >> n;
  vector<ll> att(n);
  vector<ll> def(n);
  for (int i = 0 ; i < n ; i++) cin >> att[i];
  for (int i = 0 ; i < n ; i++) cin >> def[i];
  ll damage = 0;
  for (int i = 0 ; i < n ; i++) {
    damage += ((def[i] + hatt - 1) / hatt) * att[i];
  }
  for (int i = 0 ; i < n ; i++) {
    if (hdef - (damage - att[i]) > 0) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}
 
int main() {
  FastIO
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}
```