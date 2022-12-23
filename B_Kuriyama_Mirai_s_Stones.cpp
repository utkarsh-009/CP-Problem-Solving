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

    vector<ll> v1(n + 1), v2(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v1[i] = v2[i] = x;
    }

    sort(v2.begin(), v2.end());

    ll q;
    cin >> q;

    for (ll i = 2; i <= n; i++)
    {
        v1[i] = v1[i] + v1[i - 1];
        v2[i] = v2[i] + v2[i - 1];
    }

    for (ll i = 0; i < q; i++)
    {
        ll t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
        {
            cout << v1[r] - v1[l - 1] << endl;
        }
        else
        {
            cout << v2[r] - v2[l - 1] << endl;
        }
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