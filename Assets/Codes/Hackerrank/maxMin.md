# Max Min

## Language: `c++`

### Question Statement [link](link for the problem)

&nbsp;

### **Question Statement**

You will be given a list of integers, , and a single integer . You must create an array of length from elements of such that its unfairness is minimized. Call that array . Unfairness of an array is calculated as

Where:

- max denotes the largest integer in
- min denotes the smallest integer in

Example

Pick any two elements, say .

Testing for all pairs, the solution provides the minimum unfairness.

Note: Integers in may not be unique.

Function Description

Complete the maxMin function in the editor below.
maxMin has the following parameter(s):

int k: the number of elements to select
int arr[n]:: an array of integers

**Input**
The first line contains an integer , the number of elements in array .
The second line contains an integer .
Each of the next lines contains an integer where .

**Output**
int: the minimum possible unfairness

### **Solution**

```cpp
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
   vector<int> result;
   sort(arr.begin(),arr.end());

   for(int i=0; i<arr.size()-k+1; i++)
   {
       result.push_back(arr[i+k-1]-arr[i]);
   }

   sort(result.begin(),result.end());

return result[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

```
