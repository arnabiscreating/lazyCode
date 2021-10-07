## Bit Strings

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
 
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin>>n;
	//n digits of the strings can be filled with either 1 or 0
	// 2 options
	//therefore total ways is 2^n
 
	ll base=2, ans=1;
 
	//iterative binary exponentiation for 2^n
	while(n)
	{
		if(n%2)
		{
			ans*=base;
			ans%=mod;
		}
		base*=base;
		base%=mod;
		n/=2;
	}
 
	cout<<ans;
	return 0;	
}

### 🤓 Explanation

The comments are written so that they can function as an editorial.