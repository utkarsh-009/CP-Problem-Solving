#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    ll a[n + 1], max_sum = 0, sum = 0;

    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int x = a[i];

        mp[i % k] = max(mp[i % k], x);
    }

    for (int i = 0; i < k; i++)
    {
        sum += mp[i];
    }

    cout << sum
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

/*
 for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }

    max_sum = max(max_sum, sum);

    for (int i = k; i < n; i++)
    {
        sum += a[i] - a[i - k];
        max_sum = max(max_sum, sum);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ()
            {

            }

        }

    }
*/