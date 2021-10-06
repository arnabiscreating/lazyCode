#include <bits/stdc++.h>
using namespace std;

long long checktype(string &st, int n)
{
    long long i = 0, count = 0;
    stack<char> curr;
    for (i = 0; i < n; i++)
    {
        if (st[i] != 'F')
        {
            if (curr.empty())
                curr.push(st[i]);
            else
            {
                char c = curr.top();
                if (st[i] != c)
                {
                    count++;
                    curr.pop();
                    curr.push(st[i]);
                }
            }
        }
    }
    return count;
}

int main()
{
    int t, n, j, temp = 1;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string st;
        cin.ignore();
        getline(cin, st);
        cout << "Case #" << temp << ": " << checktype(st, n) << endl;
        temp++;
    }
}
