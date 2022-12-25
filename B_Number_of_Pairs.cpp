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

    ll n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
        ans -= lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
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
        cout << '\n';
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/