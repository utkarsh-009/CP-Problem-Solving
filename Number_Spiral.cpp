#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0, low = 0, high = 0, mid = 0;

    if (x == y)
    {
        low = (x - 1) * (x - 1) + 1;
        high = x * x;
        ans = (low + high) / 2;
        cout << ans;
    }
    else if (max(x, y) % 2 == 0)
    {
        low = (max(x, y) - 1) * (max(x, y) - 1) + 1;
        high = max(x, y) * max(x, y);
        mid = (low + high) / 2;

        if (min(x, y) == x)
        {
            ans = mid - (y - x);
        }
        else
        {
            ans = mid + (x - y);
        }

        cout << ans;
    }
    else
    {
        low = (max(x, y) - 1) * (max(x, y) - 1) + 1;
        high = max(x, y) * max(x, y);
        mid = (low + high) / 2;

        if (min(x, y) == x)
        {
            ans = mid + (y - x);
        }
        else
        {
            ans = mid - (x - y);
        }

        cout << ans;
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