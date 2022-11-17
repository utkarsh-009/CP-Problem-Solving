#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll hc, dc;
    cin >> hc >> dc;

    ll hm, dm;
    cin >> hm >> dm;

    ll k, w, a;
    cin >> k >> w >> a;

    for (ll i = 0; i <= k; i++)
    {
        ll cH = hc + (k - i) * a;
        ll cD = dc + i * w;

        ll km = hm / cD;
        if (hm % cD)
        {
            km++;
        }

        ll kc = cH / dm;
        if (cH % dm)
        {
            kc++;
        }

        if (km <= kc)
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
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