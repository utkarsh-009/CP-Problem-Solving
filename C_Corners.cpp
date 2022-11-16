#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    // int a[n][m];
    int cnt1 = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            cnt1 += a[i][j];
        }
    }

    int minSum = 4;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i][j + 1];
            minSum = min(minSum, sum);
        }
    }

    int ans = cnt1;
    if (minSum == 4)
    {
        ans -= 2;
    }
    else if (minSum == 3)
    {
        ans -= 1;
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