#### Name: MEX-OR
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/OCT21C/problems/MEXOR
#### Question Statement
The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

The MEX of [2,2,1] is 0, because 0 does not belong to the array.
The MEX of [3,1,0,1] is 2, because 0 and 1 belong to the array, but 2 does not.
The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
Find the maximum possible MEX of an array of non-negative integers such that the bitwise OR of the elements in the array does not exceed X.
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
        ll x;
        cin >> x;
        if (x == 0)
            cout << "1";
        else if (x == 1)
            cout << "2";
        else
        {
            ll ans = 1;
            while (ans * 2 <= x)
            {
                ans *= 2;
            }
            if (ans == x)
                cout << x;
            else if (ans * 2 - 1 == x)
                cout << x + 1;
            else
                cout << ans;
        }

        cout << endl;
    }
    return 0;
}

```
