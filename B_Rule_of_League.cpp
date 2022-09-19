#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    if (x != 0 && y != 0 || x == 0 && y == 0)
    {
        cout << -1;
        return;
    }

    else if ((n - 1) % max(x, y) != 0)
    {
        cout << -1;
        return;
    }

    int w = max(x, y), i = 1, j = 1;

    while (i < n)
    {
        while (w--)
        {
            cout << j << " ";
            i++;
        }
        j = i + 1;
        w = max(x, y);
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