#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;

    int a[m][n], b[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = 0;
                }

                for (int k = 0; k < m; k++)
                {
                    a[k][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int isOne = 0;
            for (int k = 0; k < m; k++)
            {
                if (a[k][j] == 1)
                {
                    isOne = 1;
                }
            }
            for (int k = 0; k < n && !isOne; k++)
            {
                if (a[i][k] == 1)
                {
                    isOne = 1;
                }
            }

            if (b[i][j] != isOne)
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}