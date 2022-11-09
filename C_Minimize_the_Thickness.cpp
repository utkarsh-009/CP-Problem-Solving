#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ans = n, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int s = 0, maxs = i, end = i;
        sum += a[i];
        for (int j = i + 1; j <= n; j++)
        {
            s += a[j];
            if (s == sum)
            {
                maxs = max(maxs, j - end);
                end = j;
                s = 0;
            }
        }
        if (s == 0)
        {
            ans = min(ans, maxs);
        }
    }

    cout << ans;
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