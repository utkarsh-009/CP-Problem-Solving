#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<ll> ans(n);
    ans[0] = k * b;
    s -= k * b;

    if (s < 0)
    {
        cout << -1;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        int x = min(s, k - 1);
        ans[i] += x;
        s -= x;
    }

    if (s > 0)
    {
        cout << -1;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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