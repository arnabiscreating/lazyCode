#### Name: Exactly N plus 1 Values
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/LTIME101B/problems/N1VALUES

#### Question Statement

You are given a positive integer N. You have to print exactly N+1 positive integers satisfying the following conditions:
- Exactly one value should appear twice, all the remaining values should appear only once.
- Sum of all these values should be equal to 2^N

You have to print the values in non-decreasing order. If there are multiple solutions, you can print any of them.
#### Solution:
```
#include <iostream>
#include<math.h>
using namespace std;
typedef unsigned long long int li;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    li n,i,num;
	    cin>>n;
	    if(n==1)
	        cout<<"1 1\n";
	    else
	    {
	        for(i=1;i<n;i++)
	            cout<<i<<" ";
	        num=pow(2,n);
	        cout<<i-1<<" "<<num-n*(n+1)/2+1<<"\n";
	    }
	}
	return 0;
}
 ```
