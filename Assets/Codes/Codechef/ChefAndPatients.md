#### Name: Chef and Patients
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/CCRC21C/problems/CHEFPAT

#### Question Statement

Dr. Chef is treating COVID-19 patients. There is a queue of N patients (numbered from patient 1 at the front of the queue to patient N at the back) outside his clinic. You, his assistant, found out that for each valid i, the i-th patient has an illness level Ai.

Chef treats patients based on their health, i.e. a patient with a higher illness level is always treated before any patients with a lower illness level. Chef is also fair, so he treats patients with an equal illness level based on their position in the queue, i.e. a patient ahead in the queue is always treated before a patient with the same illness level that is further behind in the queue.

The first patient to be treated has to wait an hour for Chef to set up his equipment. Treating each patient also takes an hour, and Chef always starts treating the next patient as soon as he is done with the current one.

The patients are a bit impatient. As Chef's assistant, for each patient, find out how long (in hours) this patient needs to wait before Chef starts treating this patient.

Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers A1,A2,…,AN
</hr>

#### Solution:
```
#include <bits/stdc++.h>
using namespace std;
bool mycomp(pair<long long,long long>& a,pair<long long,long long>& b) { 
    if(a.second==b.second){
        return a.first < b.first;
    }
    else
        return a.second > b.second; 
} 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        pair<long long,long long> arr[n];
        
        for(long long i=0; i<n; i++) {
            arr[i].first=i+1;
            cin>>arr[i].second;
        }
     
        sort(arr,arr+n,mycomp);
        long long a[n];
        for(long long i=0; i<n; i++) {
            a[arr[i].first-1]=i+1;
        }

        for(long long i=0; i<n; i++){
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }   
	return 0;
}
```
