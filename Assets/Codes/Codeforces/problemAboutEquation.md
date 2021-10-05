# Problem About Equation

## Language: `c++`

### Question Statement [link](https://codeforces.com/contest/174/problem/A)

&nbsp;

### **Question Statement**

A group of n merry programmers celebrate Robert Floyd's birthday. Polucarpus has got an honourable task of pouring Ber-Cola to everybody. Pouring the same amount of Ber-Cola to everybody is really important. In other words, the drink's volume in each of the n mugs must be the same.

Polycarpus has already began the process and he partially emptied the Ber-Cola bottle. Now the first mug has a1 milliliters of the drink, the second one has a2 milliliters and so on. The bottle has b milliliters left and Polycarpus plans to pour them into the mugs so that the main equation was fulfilled.

Write a program that would determine what volume of the drink Polycarpus needs to add into each mug to ensure that the following two conditions were fulfilled simultaneously:

- there were b milliliters poured in total. That is, the bottle need to be emptied;
- after the process is over, the volumes of the drink in the mugs should be equal.

**Input**
The first line contains a pair of integers n, b (2 ≤ n ≤ 100, 1 ≤ b ≤ 100), where n is the total number of friends in the group and b is the current volume of drink in the bottle. The second line contains a sequence of integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the current volume of drink in the i-th mug.

**Output**
Print a single number "-1" (without the quotes), if there is no solution. Otherwise, print n float numbers c1, c2, ..., cn, where ci is the volume of the drink to add in the i-th mug. Print the numbers with no less than 6 digits after the decimal point, print each ci on a single line. Polycarpus proved that if a solution exists then it is unique.

Russian locale is installed by default on the testing computer. Make sure that your solution use the point to separate the integer part of a real number from the decimal, not a comma.

### **Solution**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,b, sum = 0;

    cin>>n>>b;
    double arr[(int)n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        sum= sum+arr[i];
    }
        int cond=0;
        for(int j=0; j<n; j++){
            if(((sum+b)/n)-arr[j] >= 0){
                cond+=1;
            }
        }
        if(cond == n){
            for(int k=0; k<n; k++){
                cout << fixed << setprecision(6) << ((sum+b)/n)-arr[k] << endl;
            }
        }
        else{
            cout << -1;
        }
    return 0;
}
```
