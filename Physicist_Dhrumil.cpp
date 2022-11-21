#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void bfs(map<int, vector<int>> &mp, vector<int> &v, int a, int &cnt)
{
    for (auto x : mp[a])
    {
        if (v[a] >= v[x])
        {
            cnt++;
            bfs(mp, v, x, cnt);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    int mx = INT_MIN, pos = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        v[i] = x;
        if (x == max(x, mx))
        {
            pos = i;
        }
    }

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
    }

    int cnt = 1;
    bfs(mp, v, pos, cnt);

    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/