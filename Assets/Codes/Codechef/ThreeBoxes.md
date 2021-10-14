#### Name: Three Boxes 
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/OCT21C/problems/THREEBOX

#### Question Statement
Chef has 3 boxes of sizes A, B, and C respectively. He puts the boxes in bags of size D (A≤B≤C≤D). Find the minimum number of bags Chef needs so that he can put each box in a bag. A bag can contain more than one box if the sum of sizes of boxes in the bag does not exceed the size of the bag.


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
 

//function:
 
//main:
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
    {
        int A , B , C , D;
        cin >> A >> B >> C >> D;
        if (A + B + C <= D)
            cout << "1";
        else if ((A + B <= D && C <= D) || (A + C <= D && B <= D) || (B + C <= D && A <= D))
            cout << "2";
        else
            cout << "3";
        cout << endl;
    }
    return 0;
}

```
