## Repetitions

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string s;
	cin>>s;
	char l='.';
	int cnt=0, ans=0;
	for(auto ch : s)
	{
		if(ch==l)
		{
			cnt++;
		}
		else
		{
			ans=max(ans, cnt);
			cnt=1;
		}
		l=ch;
	}
	cout<<max(ans, cnt);
	return 0;	
}

### 🤓 Explanation

Create an integer counter. Increment if current element is same as the last one. Set to 1 otherwise.