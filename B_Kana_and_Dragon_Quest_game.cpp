#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;

    while (n > 0 && x > 0 && x > x / 2 + 10)
    {
        n--;
        x = x / 2 + 10;
    }

    if (x <= m * 10)
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