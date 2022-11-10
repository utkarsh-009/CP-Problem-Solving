#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> u(n + 1);
    map<ll, pair<ll, ll>> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> u[i];

        if (mp[u[i]].first == 0)
        {
            mp[u[i]].first = i;
            mp[u[i]].second = i;
        }
        else
        {
            mp[u[i]].second = i;
        }
    }

    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (mp[a].first > mp[b].second || mp[a].first == 0 && mp[a].second == 0 || mp[b].first == 0 && mp[b].second == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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