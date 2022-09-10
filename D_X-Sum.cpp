#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    int max_sum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int sum1 = 0, sum2 = 0;

            int k = i - 1, l = j - 1;
            while (k >= 1 && l >= 1)
            {
                sum1 += a[k][l];
                k--;
                l--;
            }

            k = i + 1, l = j + 1;
            while (k <= n && l <= m)
            {
                sum1 += a[k][l];
                k++;
                l++;
            }

            k = i - 1, l = j + 1;
            while (k >= 1 && l <= m)
            {
                sum2 += a[k][l];
                k--;
                l++;
            }

            k = i + 1, l = j - 1;
            while (k <= n && l >= 1)
            {
                sum2 += a[k][l];
                k++;
                l--;
            }

            int sumTotal = sum1 + sum2 + a[i][j];

            max_sum = max(max_sum, sumTotal);
        }
    }

    cout << max_sum;
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