#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, q, k;
    cin >> n >> q >> k;

    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        /*
           x < al => al - 1
           x > ar => k - ar
           al < x < ar => 2*((ar-al+1) - (r-l+1)) => As Occurence of of x that is between ai & ai+1 will be 2. Also x != ai
           Hence, 2*(no's in range (al,ar) that are not present in array)
        */
        cout << a[l] - 1 + k - a[r] + 2 * ((a[r] - a[l] + 1) - (r - l + 1)) << endl;
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