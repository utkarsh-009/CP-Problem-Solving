#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    if (t == s)
    {
        cout << 0;
        return;
    }

    unordered_map<int, int> mp;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        p = make_pair(x, x);
        mp.insert(p);
        x++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mp[p[j]] = j;
        }
        cnt++;
        if (mp[t] == s)
        {
            cout << cnt;
            return;
        }
    }

    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}