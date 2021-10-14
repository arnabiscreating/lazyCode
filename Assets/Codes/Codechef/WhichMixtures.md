#### Name: Which Mixtures 
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/OCT21C/problems/MIXTURE/

#### Question Statement
Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

1) A solution if A>0 and B>0,

2) A solid if B=0, or

3) A liquid if A=0.

#### Solution:

```
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
 
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
 
using namespace std;
 
//typedef: 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
ll modulo = 1000000007;
double eps = 1e-12;
 
//define:
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

 
//main:
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
    {
        int A , B;
        cin >> A >> B;
        if (A > 0 && B > 0)
            cout << "Solution";
        else if (A == 0 && B > 0)
            cout << "Liquid";
        else
            cout << "Solid";
        cout << endl;
    }
    return 0;
}


```
