## Trailing Zeros

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, ans=0LL, r=1LL;
	cin>>n;
	//trailing zeros 
	// = power of 10 in n! 
	// = min(power of 2 in n!, power of 5 in n!)
	// = power of 5 in n! [since number of 5 < 2 always]
 
	while(n/r > 0)
	{
		r*=5; //r will become all powers of 5 less than n
		ans += n/r;
	}
	cout<<ans;
	return 0;	
}

### 🤓 Explanation

The comments are written so that they can function as an editorial.