#### Name: Zebra Crossing
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/COOK133C/problems/ZEBRA/

#### Question Statement
There's a zebra crossing appearing in the middle of nowhere with N blocks in it. The colors of the zebra crossing is represented by a binary string S, where Si is 1 if the i-th block from the left is white, and 0 if the block is black.

Chef really wants to play with the zebra crossing. Although the given zebra crossing might not have alternate black and white blocks, Chef wants to follow the alternating white-black color pattern while crossing it.

Initially, Chef stands at block 1. Chef has to jump exactly K times, and in each jump he has to move forward and jump to a different color than that previously occupied by Chef. More formally, suppose that Chef is currently at block i and wants to jump to block j

then following conditions should hold:
- i<j
- Si≠Sj

Output the farthest block Chef can reach with exactly K jumps. If Chef cannot jump exactly K times, output -1.

#### Solution:
```
#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
int32_t main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k, f = 0;
		string s;
		cin >> n >> k >> s;
		char end;
		if (k % 2 == 0)
		{
			end = s[0];
		}
		else if (s[0] == '0')
		{
			end = '1';
		}
		else
			end = '0';
		ll x;
		for (ll i = n - 1; i >= 0; i--)
		{
			if (s[i] == end)
			{
				x = i;
				break;
			}
		}
		char c = s[0];
		ll j = 0;
		for (ll i = 1; i <= x; i++)
		{
			if (c != s[i])
			{
				j++;
				c = s[i];
			}
		}
		if (j >= k)
		{
			cout << x + 1 << endl;
		}
		else
			cout << "-1\n";
	}
}
```
