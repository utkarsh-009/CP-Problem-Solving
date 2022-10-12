#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    unordered_map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        mp[x - i]++;
    }

    ll cnt = 0;
    for (auto x : mp)
    {
        ll num = ((x.second) * (x.second - 1)) / 2;
        cnt += num;
    }

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