#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> entries(2 * n + 1, -1); // values of indexes ranges from 1 to 2n

    for (ll i = 1; i <= n; i++)
    {
        ll ai;
        cin >> ai;

        // Storing index of array entries
        entries[ai] = i;
    }

    ll cnt = 0;
    // i + j = ai*aj
    for (ll sum = 1; sum <= 2 * n; sum++) // possible values of i+j
    {
        for (ll ai = 1; ai * ai <= sum; ai++)
        {
            if (sum % ai == 0 && entries[ai] != -1 && ai * ai != sum && entries[sum / ai] != -1 && entries[sum / ai] + entries[ai] == sum)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
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