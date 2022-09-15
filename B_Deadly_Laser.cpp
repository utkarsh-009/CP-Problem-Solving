#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    int flag = 0;

    // If any of these cases satisfies => -1 ,else shortest path is (n-1) + (m-1)
    if (sx + d >= n && sy + d >= m) // C1: destination is blocked
    {
        flag++;
    }
    if (sx - d <= 1 && sy - d <= 1) // C2: source movement is blocked
    {
        flag++;
    }

    if (sx - d <= 1 && sx + d >= n) // C3: horizontal movement blocked
    {
        flag++;
    }

    if (sy - d <= 1 && sy + d >= m) // C4: vertical movement blocked
    {
        flag++;
    }

    ((flag > 0) ? cout << -1 : cout << (n - 1) + (m - 1));
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