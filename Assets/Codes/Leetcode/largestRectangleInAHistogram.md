## TITLE
Largest Rectangle in a Histogram

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>

    </tr>
</table>

Leetcode Link: https://leetcode.com/problems/largest-rectangle-in-histogram/

### 📖 Statement

Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.


### ✍️ Solution

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int get_max_area(vector<int > a){
	int n = a.size(), ans =0, i=0;
	stack<int> st;
	a.push_back(0);
	while(i<n){
		while(!st.empty() and a[st.top()] > a[i]){
			int t = st.top();
			int h = a[t];
			st.pop();
			if(st.empty()){
				ans = max(ans, h * i);
			}else{
				int len = i - st.top() -1;
				ans = max(ans, h * len);
			}
		}
		st.push(i);
		i++;
	}
	return ans;
}
int main(int argc, char *argv[])
{
	vector<int> a = {2,1,5,6,2,3};
	cout<<get_max_area(a);
}

