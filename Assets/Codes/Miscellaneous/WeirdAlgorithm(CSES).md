## Weird ALgorithm

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

### Question Plaform
CSES

### 📖 Statement

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.

Your task is to simulate the execution of the algorithm for a given value of n.

### ✍️ Solution

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	while(n!=1)
	{
			cout<<n<<" ";
 
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n*=3;
			n++;
		}
	}
	cout<<1;
	return 0;	
}

### 🤓 Explanation

While loop is created to perform repitition until reaches 1 (as mentioned in the statment). 
