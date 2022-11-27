#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    ll gcdArr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        gcdArr = gcd(gcdArr, a[i]);
    }

    cout << a[n - 1] / gcdArr;
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