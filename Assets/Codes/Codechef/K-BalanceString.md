#### Name: K-Balance String
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/START12C/problems/KBALANCE/

#### Question Statement

A binary string S of length N is called K-balanced string if it holds the following property: For each index i(1≤i≤N) such that Si= '1', there must exist an index j(1≤j≤N) such that Sj= '1' and ∣i−j∣=K, where ∣x∣ denotes the absolute value of x
For example, if K=1
- "00", "110", "011011" are 1-balanced strings, while "010" , "1001" are not; if K=2
- "10101", "0101000101" are 2-balanced strings, while "0110" , "1001", "010" are not.

Chef is given a binary string S of length N and an integer K. He can perform the following operation on the string:
- Select an index of the string, and flip the character at that index. This means if the character was "0", it becomes "1", and vice versa.

What is the minimum number of operations Chef will have to perform so that the string becomes K-balanced?
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
	    li n,k,count=0;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;)
	    {
	        if(s[i]=='0')
	            i++;
	        else
	        {
	            if((i+k<s.size())&&(s[i+k]=='1')||(i-k>=0&&s[i-k]=='1'))
	            i++;
	            else if(i+k<s.size())
	            {
	                 s[i+k]='1';
	                 count++;
	            }
	            else
	            {
	                s[i]='0';
	                count++;
	                i++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
 ```
