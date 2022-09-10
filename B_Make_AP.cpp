#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (b - a == c - b)
    {
        cout << "YES";
        return;
    }

    ll b1 = (c + a) / 2;
    ll a1 = 2 * b - c;
    ll c1 = 2 * b - a;

    if ((a1 % a == 0 && a1 >= a && a1 != 0) || (c1 % c == 0 && c1 >= c && c1 != 0) || (b1 % b == 0 && b1 >= b && b1 != 0 && (c - a) % 2 == 0))
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/