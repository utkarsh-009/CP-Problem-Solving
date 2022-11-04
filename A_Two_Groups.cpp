#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            s1 += a[i];
        }
        else
        {
            s2 += a[i];
        }
    }

    cout << max(abs(s1), abs(s2)) - min(abs(s1), abs(s2));
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