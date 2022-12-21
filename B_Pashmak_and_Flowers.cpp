#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll max_diff = a[n - 1] - a[0], ans = 0;

    if (a[0] == a[n - 1])
    {
        ans = n * (n - 1) / 2;
        cout << max_diff << " " << ans;
    }
    else
    {

        ll m1 = 1, m2 = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[0] == a[i])
            {
                m1++;
            }
            else if (a[n - 1] == a[i])
            {
                m2++;
            }
        }

        ans = m1 * m2;

        cout << max_diff << " " << ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/