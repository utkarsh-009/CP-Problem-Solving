#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    int arr[n][n], he = 0, ho = 0;
    int lo = 1, le = 2;

    if (n % 2 == 0)
    {
        he = n * n;
        ho = he - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (lo <= ho)
                {
                    arr[i][j] = lo;
                    lo += 2;
                }
                else
                {
                    arr[i][j] = le;
                    le += 2;
                }
            }
        }
    }
    else
    {
        ho = n * n;
        he = ho - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (lo <= ho)
                {
                    arr[i][j] = lo;
                    lo += 2;
                }
                else
                {
                    arr[i][j] = le;
                    le += 2;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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