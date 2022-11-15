#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, h = 0, cnt = 0;
    bool first = false;
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] == a[i] && !first)
        {
            l = i;
            first = true;
            cnt++;
        }
        else if (a[i - 1] == a[i])
        {
            h = i - 1;
            cnt++;
        }
    }

    ll ans = 0;
    if (cnt == 1 || cnt == 0)
    {
        ans = 0;
    }
    else if (h == l)
    {
        ans = 1;
    }
    else
    {
        ans = h - l;
    }

    cout << ans;
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