#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1000000007;
ll inf = INT64_MAX;
double eps = 1e-12;
#define f(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

string string_reverse(string str)
{
    reverse(str.begin(), str.end());
    return str;
}
bool is_lexographically_smaller(string a, string b)
{
    // a<=b
    f(i, 0, a.size())
    {
        if (i < b.size())
        {
            if (a[i] > b[i])
                return false;
            if (a[i] < b[i])
                return true;
        }
        else
            return false;
    }
    return true;
}
v64 make_fibnocci(ll n)
{
    v64 arr(n);
    if (n == 0)
        return {};
    if (n == 1)
        return {1};
    arr[0] = 1;
    arr[1] = 1;
    f(i, 2, n) { arr[i] = (arr[i - 1] % MOD + arr[i - 2] % MOD) % MOD; }
    return arr;
}
ll count_bits(ll n) // for positive numbers
{
    ll count = log2(n);
    return count + 1;
}

string trim(const std::string &s)
{
    auto start = s.begin();
    while (start != s.end() && std::isspace(*start))
    {
        start++;
    }
    auto end = s.end();
    do
    {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));
    return std::string(start, end + 1);
}

/*-------------------------------------------------------------------------------------------------------
Code begins here*/
// given a range eg 0 5 >=0range<n  return the max in the range for q queries
// naive: naively iterate  from l to r and find max time complexity O(n*q)
//  O(n^2) approach precalculate all ranges answer and store it in 2 d dp table
// O(n+qlog(n)) : create a segment tree
vector<ll> arr;
ll n;
vector<ll> segmentTree;
ll getans(ll l, ll r, ll node, ll start, ll end)
{
    // cout << l << " " << r << " " << node << " " << start << " " << end << endl;
    if (start > r || end < l)
        return -inf;

    if (start >= l && end <= r)
    {
        return segmentTree[node];
    }
    ll mid = (start + end) / 2;
    ll left = getans(l, r, 2 * node, start, mid);
    ll right = getans(l, r, (2 * node) + 1, mid + 1, end);

    return max(left, right);
}
void fillnode(ll node, ll start, ll end)
{
    if (start > end)
        return;
    if (start == end)
    {
        segmentTree[node] = arr[start];
        return;
    }
    ll leftnode = 2 * node;
    ll rightnode = 2 * node + 1;
    ll mid = (start + end) / 2;
    fillnode(leftnode, start, mid);
    fillnode(rightnode, mid + 1, end);
    segmentTree[node] = max(segmentTree[leftnode], segmentTree[rightnode]);
}
ll findmax(ll l, ll r)
{
    return getans(l, r, 1, 0, n - 1);
}
void update(ll index, ll val, ll node, ll start, ll end)
{
    if (start == end)
    {
        // leaf node and index=start
        arr[index] = val;
        segmentTree[node] = val;
        return;
    }
    ll mid = (start + end) / 2;
    if (index <= mid)
        update(index, val, 2 * node, start, mid);
    else
        update(index, val, 2 * node + 1, mid + 1, end);

    segmentTree[node] = max(segmentTree[2 * node], segmentTree[2 * node + 1]);
}
void update(ll index, ll val)
{
    update(index, val, 1, 0, n - 1);
}

int main()
{
    arr = {1, 2, 5, 3, 7, 3, 9, 10, 5};
    n = arr.size();
    segmentTree.resize(4 * n, 0);

    fillnode(1, 0, n - 1);
    // segment tree is created
    // f(i, 0, 4 * n)
    //         cout<< segmentTree[i] << " ";
    // cout << endl;
    ll ans1 = findmax(0, 3);
    ll ans2 = findmax(3, 7);
    ll ans3 = findmax(4, 7);
    ll ans4 = findmax(3, 3);
    cout << ans1 << " " << ans2 << " " << ans3 << " " << ans4 << endl;
    update(3, 11);
    cout << findmax(0, n - 1) << endl;
    return 0;
}
