#### Name: Summer Heat
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/JUNE21B/problems/COCONUT

#### Question Statement
Chefland has 2 different types of coconut, type A and type B. Type A contains only xa milliliters of coconut water and type B contains only xb grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.
</hr>

#### Solution:
```
#include <iostream>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        int A,B,rA,rB;
        cin>>A>>B>>rA>>rB;
        cout<<(rA/A)+(rB/B)<<endl;
    }
	return 0;
}
```
