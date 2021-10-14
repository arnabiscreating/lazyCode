#### Name: Longest And SubArray
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/OCT21C/problems/ANDSUBAR
#### Question Statement
You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.

#### Solution:
```
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <cmath>
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


//function:

//main:
int main ()
{
    fast_cin ();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        ll ans1 = 1;
        while (ans1 * 2 <= n)
        {
            ans1 = ans1 * 2;
        }
        ll ans2 = n - ans1 + 1;
        if (n == ans1)
            cout << ans1 / 2;
        else
            cout << max (ans2 , ans1 / 2);
        cout << endl;
    }
    return 0;
}
```
