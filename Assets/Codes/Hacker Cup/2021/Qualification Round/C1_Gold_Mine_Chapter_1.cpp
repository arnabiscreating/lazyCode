#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
int main()
{
    int t, n, i, j, temp = 1;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector< unsigned long long> c;
        int elem;
        for (i = 0; i < n; i++)
        {
            cin >> elem;
            c.push_back(elem);
        }
        vector<vector<int>> v(n + 1);
        int m = n - 1;
        for (i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v[x - 1].push_back(y - 1);
            v[y - 1].push_back(x - 1);
        }
        vector< unsigned long long> dis(n, 0);
        int src;
        src = 0;
        priority_queue<pair< unsigned long long, int>, vector<pair< unsigned long long, int>>> pq;
        pq.push({0, src});
        dis[src] = 0;
        vector<bool> vis(n + 1, false);
        while (!pq.empty())
        {
            pair<int, int> node = pq.top();
            pq.pop();
            vis[node.second] = true;
            for (auto it : v[node.second])
            {
                 unsigned long long curr = dis[node.second] + c[it];
                if (dis[it] < curr && !vis[it])
                {
                    dis[it] = curr;
                    pq.push({curr, it});
                }
            }
        }
        unsigned long long mp = 0, pos = 0, i = 0, maxnode;
        // ;
        for (auto it : dis)
        {
            if (mp < it)
                pos = i;
            mp = max(mp, it);
            i++;
        }
        unsigned long long ans = mp;
        unsigned long long currmax = 0;
        if (v[0].size() > 1)
        {
            if (1)
            {
                int flag = 0;
                vector<int> vis2(100000, 0);
                for (auto it : v[0])
                {
                    queue<int> q;
                    q.push(it);
                    vis2[it] = 1;
                    while (!q.empty())
                    {
                        int node = q.front();
                        q.pop();
                        for (auto itr : v[node])
                        {
                            if (itr && !vis2[itr] && itr != 0)
                            {
                                vis2[itr] = 1;
                                if (itr == pos)
                                {
                                    flag = 1;
                                    maxnode = it;
                                }
                                q.push(itr);
                            }
                        }
                        if (flag)
                            break;
                    }
                    if (flag)
                        break;
                }
            }

            vector<int> vis2(100000, 0);
            for (auto it : v[0])
            {
                if (it == maxnode)
                    continue;
                queue<int> q;
                q.push(it);
                vis2[it] = 1;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    if (v[node].size() == 1)
                    {
                        currmax = max(currmax, dis[node]);
                    }
                    for (auto itr : v[node])
                    {
                        if (itr && !vis2[itr] && itr != 0)
                        {
                            vis2[itr] = 1;
                            q.push(itr);
                        }
                    }
                }
            }
        }
        ans += currmax + c[0];
        cout << "Case #" << temp++ << ": " << ans << endl;
    }
}
