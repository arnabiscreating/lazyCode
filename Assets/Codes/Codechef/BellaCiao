#### Name: Bella ciao
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/JUNE21B/problems/CHFHEIST

#### Question Statement

Chef is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.
</hr>

#### Solution:
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long D,d,p,q,x,count=0,y;
        cin>>D>>d>>p>>q;
        x=D/d;
        if(x%2==0){
            count+=d*((x/2)*(2*p+(x-1)*q));
        }
        else{
            count+=d*(x*(p+((x-1)/2)*q));
        }
        count+=(D%d)*(p+(x)*q);
        cout<<count<<endl;
    }
	return 0;
}
```
