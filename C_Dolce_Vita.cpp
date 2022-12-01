#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    sort(a.begin(), a.end());

    ll total = 0, preSum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((x - (preSum + a[i])) / (i + 1) > 0)
        {
            total += (x - (preSum + a[i])) / (i + 1);
        }

        preSum += a[i];
    }

    cout << total;
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