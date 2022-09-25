
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int maxPages(int n, int x, vector<int> h, vector<int> s)
{
    if (n <= 0)
    {
        return 0;
    }

    if (x == 0)
    {
        return 0;
    }

    return max(maxPages(n - 1, x, h, s), maxPages(n - 1, x - s[n - 1], h, s) + h[n - 1]);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> h(n), s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << maxPages(n, x, h, s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/