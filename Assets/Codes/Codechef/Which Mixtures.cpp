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
 

//function:
 
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
