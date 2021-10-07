## Missing Number

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	int s=(n*(n+1))/2;
	for(int i=0; i<n-1; ++i){
		int a;
		cin>>a;
		s-=a;
	}
	cout<<s;
	return 0;	
}

### 🤓 Explanation

The sum of first n numbers in n*(n+1)/2. Removing each number in the array from the sum. Remaining value is the missing number. 