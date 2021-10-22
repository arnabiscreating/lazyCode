#### Name: Professor And Directions
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/problems/DIRECTN

#### Question Statement

The Professor is facing the North. Tokyo is in trouble, and she is facing the South. Professor being her guardian angel wants to help her.

So, The Professor will follow some instructions, given as a string S of length N, and will turn either left or right according to these instructions. He can save Tokyo only if after following a substring of instructions he will face in the same direction that Tokyo is facing.

Will the Professor be able to save Tokyo?
#### Solution:
```
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    bool flag=false;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            flag=true;
	            break;
	        }
	    }
	    if(flag)
	    {
	        cout<<"YES\n";
	    }
	    else
	        cout<<"NO\n";
	    
	}
	return 0;
}
}
 ```
