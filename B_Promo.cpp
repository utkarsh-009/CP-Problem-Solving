#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> p(n), preSum(n + 1);

    for (auto &x : p)
    {
        cin >> x;
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < n; ++i)
    {

        preSum[i + 1] = preSum[i] + p[i];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << preSum[n - x + y] - preSum[n - x] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}