#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007
using namespace std;

/*
Here obtained formula is => x/sum = k/100
Binary Search to find right sum that will satisfy all the conditions. As all other terms are fixed except sum variable
*/

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 1e14;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        ll sum = a[0] + mid;
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            ll x = sum * k / 100;
            if (a[i] > x)
            {
                ok = false;
                break;
            }
            sum += a[i];
        }
        if (ok)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << "\n";
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