#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
/*
Q: building n−1 two-way roads in such a way that all districts are reachable from each
other and each pair of directly connected districts belong to different gangs

- vector of pairs will store route to connect
- if (a[i] != a[j] => not same gang && route.size < n-1 => less tha n-1 routes made till now && ith or jth are not connect to route
   then, add a[i] and a[j] to route and make ith and jth as true
*/
bool check(vector<bool> connected)
{
    for (int i = 0; i < connected.size(); i++)
    {
        if (connected[i] != true)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> route;
    vector<bool> connected(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] != a[j] && route.size() < n - 1 && (!connected[i] || !connected[j]))
            {
                route.push_back(make_pair(i + 1, j + 1));
                connected[i] = connected[j] = true;
            }
        }
    }

    if (route.size() == n - 1 && check(connected))
    {
        cout << "YES" << endl;
        for (auto x : route)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/