#### Name: Travel Pass
#### Language: C
#### Platform: Codechef
#### Question: https://www.codechef.com/SEPT21C/problems/TRAVELPS

#### Question Statement

Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. It takes A minutes to fill each inter-district e-pass application and B
minutes for each inter-state e-pass application.

His journey is given to you as a binary string S
of length N where 0 denotes crossing from one district to another district (which needs an inter-district e-pass), and a 1 denotes crossing from one state to another (which needs an inter-state e-pass).

Find the total time Chef has to spend on filling the various forms.
</hr>

#### Solution:
```
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	char str[100];
	while(t--)
	{
	    int n , a , b;
	    scanf("%d %d %d",&n,&a,&b);
	    scanf("%s",str);
	    int sum=0,c1=0,c2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(str[i]=='0')
	        {
	            c1++;
	        }
	        else if(str[i]=='1')
	        {
	            c2++;
	        }
	    }
	    sum=a*c1+b*c2;
	    printf("%d\n",sum);
	}
	return 0;
}
```
