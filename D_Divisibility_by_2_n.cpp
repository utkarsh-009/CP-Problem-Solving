#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll cnt2_pf(ll x)
{
    ll cnt = 0;
    while (x % 2 == 0)
    {
        cnt++;
        x /= 2;
    }

    return cnt;
}

void solve()
{
    ll n;
    cin >> n;

    ll cnt = 0;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        cnt += cnt2_pf(x);
        v.push_back(cnt2_pf(i));
    }

    if (cnt >= n)
    {
        cout << 0;
    }
    else
    {
        ll ans = 0;
        sort(v.rbegin(), v.rend());

        for (int i = 0; i < v.size(); i++)
        {
            cnt += v[i];
            ans++;
            if (cnt >= n)
            {
                cout << ans;
                return ;
            }
        }

        if (cnt < n)
        {
            cout << -1;
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/