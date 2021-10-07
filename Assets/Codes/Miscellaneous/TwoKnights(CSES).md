## Two Knights

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	std::vector<int> v;
	v.pb(0);
	v.pb(6);
	v.pb(28);
	int x=n;
	int k;
	while((n-3)>0)
	{
		n--;
		k=(int)v.size()+1;
		v.pb(v.back() + (2*k-1)*(k-1)*k - 8*(k-2));
	}
	for(int i=0; i<x; ++i)
		cout<<v[i]<<"\n";
	return 0;	
}

### 🤓 Explanation

Sometimes the best way os to brute a couple of answers for easy contraints and [check OEIS](https://oeis.org/A172132). 