#### Name: Shuffling Parities
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/SEPT21C/problems/SHUFFLIN

#### Question Statement

Chef is given an array A consisting of N positive integers. Chef shuffles the array A and creates a new array B of length N, where Bi=(Ai+i)mod2, for each i(1≤i≤N).

Find the maximum possible sum of integers of the array B
, if Chef shuffles the array A optimally.
</hr>

#### Solution:
```
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,s=0,codd=0,ceven=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d ",&arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==1)
	            ceven++;
	        else
	            codd++;
	    }
	    s=min(ceven,n/2)+min(codd,(n+1)/2);
	    printf("%d\n",s);
	}
	return 0;
}

int min(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
```
