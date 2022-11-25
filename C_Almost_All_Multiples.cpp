#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<bool> used(n + 1, false);
    vector<ll> ans(n + 1);

    ans[n] = 1, ans[1] = x;
    used[1] = true, used[x] = true;
    for (ll i = 2; i <= n - 1; i++)
    {
        ll idx = i;
        while (idx <= n && used[idx])
        {
            idx += i;
        }

        if (idx <= n && !used[idx])
        {
            ans[i] = idx;
            used[idx] = true;
        }
        else
        {
            cout << -1;
            return;
        }
    }

    for (ll i = 1; i <= n; i++)
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