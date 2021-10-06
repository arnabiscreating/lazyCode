#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, temp = 1;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string st[n];
        for (i = 0; i < n; i++)
            cin >> st[i];
        long long ans = 0;
        int flag = 1, dots = 0, mindots = INT_MAX, count = 1;
        for (i = 0; i < n; i++)
        {
            dots = 0, flag = 1;
            int x = 0;
            for (j = 0; j < n; j++)
            {
                if (st[i][j] == 'O')
                {
                    flag = 0;
                    break;
                }
                if (st[i][j] == '.')
                    dots++;
                else
                    x++;
            }
            if (x == n)
            {
                mindots = 0;
                if (count != 1)
                    count++;
            }
            else if (flag)
            {
                if (mindots > dots && dots != 0)
                {
                    count = 1;
                    mindots = dots;
                }
                else if (mindots == dots)
                    count++;
            }
        }
        for (i = 0; i < n; i++)
        {
            dots = 0, flag = 1;
            int x = 0;
            for (j = 0; j < n; j++)
            {
                if (st[j][i] == 'O')
                {
                    flag = 0;
                    break;
                }
                if (st[j][i] == '.')
                    dots++;
                else
                    x++;
            }
            if (x == n)
            {
                mindots = 0;
                if (count != 1)
                    count++;
            }
            else if (flag)
            {
                if (mindots > dots && dots != 0)
                {
                    count = 1;
                    mindots = dots;
                }
                else if (mindots == dots)
                {
                    int pos,currdot=0,currflag=1;
                    if(dots==1){
                    for (j = 0; j < n; j++)
                    {
                        if (st[j][i] == '.')
                            {
                                pos=j;
                                break;
                            }
                    }
                   for (j = 0; j < n; j++)
                    {
                        if (st[pos][j] == '.')
                            {
                                currdot++;
                            }
                        else if(st[pos][j]=='O')    
                              {
                                  currflag=0;
                                  break;
                              }
                    }
                    if(currdot==1&&currflag)
                     count--; 
                  }
                    count++;
                }
            }
        }
        if (mindots == INT_MAX)
            cout << "Case #" << temp++ << ": "
                 << "Impossible" << endl;
        else
            cout << "Case #" << temp++ << ": " << mindots << " " << count << endl;
    }
}
