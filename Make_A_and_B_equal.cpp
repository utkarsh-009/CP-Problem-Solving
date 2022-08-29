#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;

    ll sumA = 0, sumB = 0, diffA = 0, diffB = 0;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        sumA += x;
    }

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        b[i] = x;
        sumB += x;
    }

    for (int i = 1; i <= n; i++)
    {
        ((a[i] > b[i]) ? diffA += a[i] - b[i] : diffB += b[i] - a[i]);
    }

    // if (sumA != sumB)
    // {
    //     cout << -1;
    // }

    if (diffA == diffB)
    {
        cout << diffA;
    }
    else
    {
        cout << -1;
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
        cout << "\n";
    }
}