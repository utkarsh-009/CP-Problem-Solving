#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll mxSum = INT_MIN;
    bool pos = (v[0] > 0);
    ll mx = INT_MIN, ans = 0;

    for (int i = 0; i < n;)
    {
        if (pos)
        {
            while (v[i] > 0 && i < n)
            {
                mx = max(mx, v[i]);
                i++;
            }

            ans += mx;
            mx = INT_MIN;
            pos = false;
        }
        else
        {
            while (v[i] < 0 && i < n)
            {
                mx = max(mx, v[i]);
                i++;
            }

            ans += mx;
            mx = INT_MIN;
            pos = true;
        }
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