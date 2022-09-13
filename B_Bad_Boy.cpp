#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    int x1 = 1, y1 = 1, x2 = n, y2 = m;

    // Top Right cell and Bottom left cell will always be max distance away
    cout << x1 << " " << y1 << " " << x2 << " " << y2;
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