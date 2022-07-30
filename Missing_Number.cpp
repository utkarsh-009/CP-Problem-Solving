#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = (n * (n + 1)) / 2;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;

        sum -= x;
    }

    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
