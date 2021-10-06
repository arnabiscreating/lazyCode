#### Name: Airline Restriction
#### Language: C
#### Platform: Codechef
#### Question: https://www.codechef.com/SEPT21C/problems/AIRLINE

#### Question Statement
Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D
kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.
</hr>

#### Solution:
```
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d,e;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	    if(a+b<=d && c<=e)
	    {
	        printf("YES\n");
	    }
	    else if(a+c<=d && b<=e)
	    {
	        printf("YES\n");
	    }
	    else if(c+b<=d && a<=e)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}


```
