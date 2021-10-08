#### Name: Adjacency Hatred
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/COOK133C/problems/ADJHATE

#### Question Statement

An array is called lovely if the sum of absolute differences of each adjacent pair of elements is odd; formally, the array S of size m is lovely if ∑m−1i=1 |Si−Si+1| is odd.

You are given an array A of N integers. You need to reorder the array in any manner such that the array becomes lovely. If there is no reordering operation that makes the array lovely, output -1.
#### Solution:
```
#include <iostream>
#include<vector>
using namespace std;
typedef long long int li;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<long long int> odd,even;
	    li arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]%2==0)
	            even.push_back(arr[i]);
	        else
	            odd.push_back(arr[i]);
	    }
	    if(even.size()==0||odd.size()==0)
	    {
	        cout<<"-1"<<"\n";
	    }
	    else
	    {
	        int i;
	        for(i=0;i<odd.size();i++)
	            cout<<odd[i]<<" ";
	        for(i=0;i<even.size();i++)
	            cout<<even[i]<<" ";
	        cout<<"\n";
	    }
	}
	return 0;
}
 ```
