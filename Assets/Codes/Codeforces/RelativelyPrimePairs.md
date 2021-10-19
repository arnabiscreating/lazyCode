
# Relatively Prime Pairs

## Language: `C++`

### Question Statement.
[link](https://codeforces.com/problemset/problem/1051/B?f0a28=1)

&nbsp;

### **Question Statement**

You are given a set of all integers from 𝑙 to 𝑟 inclusive, 𝑙<𝑟, (𝑟−𝑙+1)≤3⋅105 and (𝑟−𝑙) is always odd.

You want to split these numbers into exactly 𝑟−𝑙+12 pairs in such a way that for each pair (𝑖,𝑗) the greatest common divisor of 𝑖 and 𝑗 is equal to 1. Each number should appear in exactly one of the pairs.

Print the resulting pairs or output that no solution exists. If there are multiple solutions, print any of them.

**Input**

The only line contains two integers 𝑙 and 𝑟 (1≤𝑙<𝑟≤1018, 𝑟−𝑙+1≤3⋅105, (𝑟−𝑙) is odd).


**Output**

If any solution exists, print "YES" in the first line. Each of the next 𝑟−𝑙+12 lines should contain some pair of integers. GCD of numbers in each pair should be equal to 1. All (𝑟−𝑙+1) numbers should be pairwise distinct and should have values from 𝑙 to 𝑟 inclusive.

If there are multiple solutions, print any of them.

If there exists no solution, print "NO".

### **Solution**

```
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()

ll gcd(ll a, ll b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    vector<ll> even;
    vector<ll> odd;
    for (ll i = l; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    int itr_odd = 0, itr_even = 0;
    map<ll, ll> dict;
    while (itr_odd < (r - l + 1) / 2 && itr_even < (r - l + 1) / 2)
    {
        if (gcd(odd[itr_odd], even[itr_even]) == 1)
        {
            dict[odd[itr_odd]] = even[itr_even];
            itr_odd++;
            itr_even++;
        }
        else
        {
            itr_even++;
        }
        if (itr_odd == (l - r - 1) / 2 || itr_even == (l - r - 1) / 2)
        {
            break;
        }
    }
    cout << "YES" << endl;
    for (auto i : dict)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}

```
