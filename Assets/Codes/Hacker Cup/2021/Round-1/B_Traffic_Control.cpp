#include <bits/stdc++.h>
using namespace std;

void printmt(int n, int m, int a, int b)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == 0 && j == 0 )
                cout << a - n - m + 2<<" ";
            else if(i == n - 1 && j == 0)    
                  cout << b - n - m +2<<" ";
                  else 
                   cout<<"1 ";
        }
        cout << endl;
    }
}

int main()
{
    int t, n, j, temp = 1;
    cin >> t;

    while (t--)
    {
        int m, a, b;
        cin >> n >> m >> a >> b;
        if ((n + m - 1) > a || (n + m - 1) > b)
            cout << "Case #" << temp << ": Impossible" << endl;
        else
        {
            cout << "Case #" << temp << ": Possible" << endl;
            printmt(n, m, a, b);
        }
        temp++;
    }
}
