#### Name: Total Score
#### Language: C++
#### Platform: Codechef
#### Question: https://leetcode.com/problems/two-sum/

#### Question Statement

There are K problems in a contest with N participants. All the problems don't necessarily have the same points assigned to them - you are given an array A of integers, where Ai denotes the points assigned to the ith problem. If a participant solves the ith problem, they will get Ai points added to their total score. Note that there are no partial points - they can get only 0 or Ai points on the ith problem. For each participant i, you are also given their final verdict in each problem in the form of a binary string Si - a 1 denotes that they solved that problem, and a 0 denotes that they did not.

Your job is to find the total score of each participant.
</hr>

#### Solution:
```
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long A[k];
        for(long long i=0;i<k;i++){
            cin>>A[i];
        }
        for(long long i=0;i<n;i++){
            string sp;
            cin>>sp;
            long long ans=0;
            for(long long j=0;j<k;j++){
                if(sp[j]=='1'){
                    ans=ans+A[j];
                }
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}
```
