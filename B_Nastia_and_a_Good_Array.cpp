#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = INT_MAX, pos = -1;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a < x)
        {
            x = a;
            pos = i;
        }
    }
    cout << n - 1 << endl;
    for (int i = 0; i < n; ++i)
    {
        if (i == pos)
        {
            continue;
        }
        cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) << "\n";
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/