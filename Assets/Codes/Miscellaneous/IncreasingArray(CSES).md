## Increasing Array

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin>>n;
	ll max_so_far=0,ans=0;
	for(int i=0; i<n; ++i)
	{
		ll a;
		cin>>a;

		ans += max(0LL, max_so_far-a);

		max_so_far=max(max_so_far, a);
	}
	cout<<ans;
	return 0;	
}
### 🤓 Explanation

if the current element 'a' is less than max value so far we will increase 'a' to the max while keeping track of maximum value in array so far