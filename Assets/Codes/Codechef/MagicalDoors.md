#### Name: Magical Doors
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/START13B/problems/MAGDOORS

#### Question Statement

Chef wants to cross a hallway of N doors. These N doors are represented as a string. Each door is initially either open or close, represented by 1 or 0 respectively. Chef is required to go through all the doors one by one in the order that they appear, starting from the leftmost door and moving only rightwards at each step.

To make the journey easier, Chef has a magic wand, using which Chef can flip the status of all the doors at once. Determine the minimum number of times Chef has to use this wand to cross the hallway of doors.

For example, the doors are 10011. Chef will start from the left and enter the first door. After passing through that door, the magic wand is waved. This flips the string to 01100. Now Chef passes through the next two doors in one go. Again, just before reaching the 4th door, the magic wand is waved. Now that the string is in its original state, Chef passes through the last two doors as well. The minimum number of times the magic wand needed to be used here was 2
#### Solution:
```
#include <iostream>
#include<vector>
using namespace std;
typedef long long int li;
int main() {
	// your code goes here
	li t;
	cin>>t;
	while(t--)
	{
	    li count=0;
	    string s,s2="";
	    cin>>s;
	    for(li i=0;i<s.size();i++)
	    {
	        if(s[i]=='0')
	            s2+='1';
	        else
	            s2+='0';
	    }
	    bool flag=false;
	    for(li i=0;i<s.size();i++)
	    {
	        if(!flag)
	        {
	            if(s[i]=='0')
	            {
	                count++;
	                flag=true;
	            }
	        }
	        else
	        {
	            if(s2[i]=='0')
	            {
	                count++;
	                flag=false;
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
```
