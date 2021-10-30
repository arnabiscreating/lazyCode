#### Name: Chef and Water Car
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/LTIME101B/problems/CHEFCAR

#### Question Statement

Chef is a great mechanic. As the cost of petrol is increasing day by day he decided to build a water car to take his girlfriend Natasha on a date. Water car has great build quality but is able to travel only 1 Km on every 1 liter of water. To show off his water car to Natasha he took her to the formula racing track which is an (N−1) km long road with checkpoints numbered 1 to N from left to right. The distance between two adjacent checkpoints is 1Km.

Initially, Chef is at checkpoint number 1 and the tank of the water car is empty. At every checkpoint, there is a water station, but the cost of filling 1 liter of water at a checkpoint is equal to the checkpoint number. Chef can not store more than V liters of water in the tank of a car. Chef is interested in both minimum as well as the maximum cost of filling that can happen to reach the checkpoint number N

You shouldn't have any water left after reaching Nth checkpoint. Also, you are not allowed to pour out water.
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
	    li n,v,cost=0;
	    cin>>n>>v;
	    if(v==1)
	    {
	        cout<<(n*(n-1))/2<<" "<<(n*(n-1))/2<<"\n";
	    }
	    else if(v>=n-1)
	    {
	        cout<<(n*(n-1))/2<<" "<<n-1<<"\n";
	    }
	    else
	    {
	        cost=v+((n-v)*(n-v+1))/2-1;
	        cout<<(n*(n-1))/2<<" "<<cost<<"\n";
	    }
	}
	return 0;
}
 ```
