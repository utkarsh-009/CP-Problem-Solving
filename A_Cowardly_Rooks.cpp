#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> board(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;

        board[x][y] = 1;
    }

    if (n == 1)
    {
        cout << "NO";
    }
    else if (m == 1)
    {
        cout << "YES";
    }
    else
    {
        bool safePos = false;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= n; j++)
            {
                if (board[i][j] == 1)
                {
                    cnt++;
                }
            }

            if (cnt == 0)
            {
                safePos = true;
            }
        }

        if (safePos)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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