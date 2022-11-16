#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x == k && i != n - 1)
        {
            ok = true;
        }
        else if (x == k && n == 1)
        {
            ok = true;
        }
    }

    if (ok)
    {
        cout << "Yes";
    }
    else
    {

        cout << "No";
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