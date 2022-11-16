#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    int arr[64][n + 1];
    for (int i = 0; i < n; i++)
    {

        ll x;
        cin >> x;

        for (int j = 0; j < 64; j++)
        {
            arr[j][i] = x % 2;
            x /= 2;
        }
    }

    for (ll i = 0; i < 64; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            cnt += arr[i][j];
            arr[i][j] = cnt;
        }
    }

    while (q--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        l1--, l2--, r1--, r2--;

        int totalf = r1 - l1 + 1;
        int totals = r2 - l2 + 1;
        int totalfo, totalso;

        if (l1 == 0)
        {
            totalfo = arr[k][r1];
        }
        else
        {
            totalfo = arr[k][r1] - arr[k][l1 - 1];
        }
        if (l2 == 0)
        {
            totalso = arr[k][r2];
        }
        else
        {
            totalso = arr[k][r2] - arr[k][l2 - 1];
        }

        long sum = (long)(totalf - totalfo) * (long)(totalso) + (long)(totalfo) * (long)(totals - totalso);
        cout << sum << endl;
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/