## MEX or MixUp

### 💻 Language(s)

<table>
    <tr>
        <td>✔️ C++</td>
    </tr>
</table>

<!-- ### Question Plaform
(If platform is miscellaneous)
✔️AtCoder
Topcoder
SPOJ
-->

### 📖 Statement

Alice gave Bob two integers a and b (a>0 and b≥0). Being a curious boy, Bob wrote down an array of non-negative integers with MEX value of all elements equal to a and XOR value of all elements equal to b.

What is the shortest possible length of the array Bob wrote?

Recall that the MEX (Minimum EXcluded) of an array is the minimum non-negative integer that does not belong to the array and the XOR of an array is the bitwise XOR of all the elements of the array.

Input
The input consists of multiple test cases. The first line contains an integer t (1≤t≤5⋅104) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers a and b (1≤a≤3⋅105; 0≤b≤3⋅105) — the MEX and XOR of the array, respectively.

### ✍️ Solution

#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b; //b expected xor
        cin >> a >> b;
        ll res = 0;
        ll ans = a;
        for (int i = 1; i < a; i++)
        {
            res = res ^ i;
        }
        ll n = res ^ b; //the num n^b=res
        if (res == b)   //do nothing result and xor same
        {
        }
        else if (n == a) // cannot be included need two more numbers
        {
            a += 2;
        }
        else //if n<a or n>a we need to add one more number
        {
            a++;
        }

        cout << a << endl;
    }
    return 0;

}

### 🤓 Explanation

1. We need to add all the numbers from 0 to a-1, to fulfill the mex condition(a elements).
2. We take xor of numbers from 0 to a-1 and store result in res
3. If res=b, then there is no need to add any other number return a(size of elements from 0 to n-1)
4. Now res!= b, we must add other element (n) to the list suct that xor of all elemns is b
5. So n xor res should be b
6. By definition n^res=b so b^res=n
7. If n== a, we can't add a in the set, we need two numbers whose xor is a, that can be added to the set, so return a+2
8. If n!=a we can add that number in the set, so resturn a+1
