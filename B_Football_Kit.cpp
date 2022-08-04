#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll v[n][2];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }
    }

    for (ll k = 0; k < n; k++)
    {
        ll hk = n - 1, ak = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i == k)
            {
                continue;
            }

            ((v[k][1] != v[i][0]) ? ak++ : hk++);
        }
        cout << hk << " " << ak << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}