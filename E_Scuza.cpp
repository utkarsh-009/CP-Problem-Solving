#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), k(q);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < q; i++)
    {
        cin >> k[i];
    }

    vector<ll> preSum, maxH;
    preSum.push_back(0);
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        preSum.push_back(preSum.back() + x);
        if (i == 0)
        {
            maxH.push_back(x);
        }
        else
        {
            maxH.push_back(max(maxH.back(), x));
        }
    }

    for (ll i = 0; i < q; i++)
    {
        int legH = k[i];
        int idx = upper_bound(maxH.begin(), maxH.end(), legH) - maxH.begin();
        cout << preSum[idx] << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/