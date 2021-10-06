#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, temp = 1;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        long long ans = 0;
        map<int, int> cons;
        map<int, int> vow;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'A' || s[i] == 'U' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O')
                vow[s[i] - 'A']++;
            else
                cons[s[i] - 'A']++;
        }
        int l1 = vow.size();
        int l2 = cons.size();
        if ((l1 == 0 && l2 == 1) || (l2 == 0 && l1 == 1))
        {
            cout << "Case #" << temp++ << ": " << 0 << endl;
            continue;
        }
        int max1 = 0, max2 = 0;
        long long sum1 = 0, sum2 = 0;
        for (auto it : cons)
        {
            max1 = max(it.second, max1);
            sum1 += it.second;
        }
        for (auto it : vow)
        {
            max2 = max(it.second, max2);
            sum2 += it.second;
        }
        if (max1 > 2 * sum2 && sum2 != 0)
        {
            ans = sum2 + 2 * (sum1 - max1);
        }
        else if (max2 > 2 * sum1 && sum1 != 0)
            ans = sum1 + 2 * (sum2 - max2);
        else if (sum1 > sum2)
        {
            if (sum2 != 0)
                ans = sum1 + 2 * (sum2 - max2);
            else
            {
                if (max1 > sum1 / 2)
                    ans = 2 * (sum1 - max1);
                else
                    ans = sum1;
            }
        }
        else if (sum2 > sum1)
        {
            if (sum1 != 0)
                ans = sum2 + 2 * (sum1 - max1);
            else
            {
                if (max2 > sum2 / 2)
                    ans = 2 * (sum2 - max2);
                else
                    ans = sum2;
            }
        }
        else
        {
            if (max1 > max2)
                ans = sum2 + 2 * (sum1 - max1);
            else
                ans = sum1 + 2 * (sum2 - max2);
        }
        cout << "Case #" << temp++ << ": " << ans << endl;
    }
}
