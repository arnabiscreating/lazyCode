#### Name: Yet Another SOD Problem
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/LTIME100B/problems/SOD3/

#### Question Statement

Ujan is a software developer. He is developing a software that takes two integers L and R and outputs the count of integers in the sequence L,L+1,…,R−1,R whose sum of digits (SOD) is divisible by 3.

He has developed the user interface (UI) quite easily. He is having a hard time finding the logic to solve the problem. As you are not only a good friend of Ujan but also a good problem solver, he asks you to help him out.
#### Solution:
```
#include <iostream>
using namespace std;
typedef long long int li;
int main() {
	// your code goes here
	li t;
	cin>>t;
	while(t--)
	{
	    li l,r,count=0,left,right;
	    cin>>l>>r;
	    if(r-l+1>=3)
	    {
	    while(true)
	    {
	        if(l%3==0)
	        {
	            left=l;
	            break;
	        }
	        l++;
	    }
	    while(true)
	    {
	        if(r%3==0)
	        {
	            right=r;
	            break;
	        }
	        r--;
	    }
	    cout<<(right-left)/3+1<<"\n";
	    }
	    else
	    {
	       while(l<=r)
	       {
	           if(l%3==0)
	            count++;
	           l++;
	       }
	       cout<<count<<"\n";
	    }
	}
	return 0;
}
 ```
