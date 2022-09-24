#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
// RECURSIVE
int cntSafePaths(int i, int j, int r, int c, vector<vector<char>> &grid)
{
    if (i == r || j == c)
    {
        return 0;
    }

    if (grid[i][j] == '*')
    {
        return 0;
    }

    if (i == r - 1 && j == c - 1)
    {
        return 1;
    }

    return (cntSafePaths(i + 1, j, r, c, grid) + cntSafePaths(i, j + 1, r, c, grid)) % mod;
}
*/

// DP [TC: O(n*n)]
ll cntSafePaths(int r, int c, vector<vector<char>> &grid)
{
    vector<vector<ll>> noOfSafePaths(r, vector<ll>(c)); // To store possible no of safe paths to reach some (i,j)
    noOfSafePaths[0][0] = (grid[0][0] != '*');

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] != '*')
            {
                if (i - 1 >= 0 && grid[i - 1][j] != '*')
                {
                    noOfSafePaths[i][j] = (noOfSafePaths[i][j] + noOfSafePaths[i - 1][j]) % mod;
                }

                if (j - 1 >= 0 && grid[i][j - 1] != '*')
                {
                    noOfSafePaths[i][j] = (noOfSafePaths[i][j] + noOfSafePaths[i][j - 1]) % mod;
                }
            }
        }
    }

    return noOfSafePaths[r - 1][c - 1] % mod;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << cntSafePaths(n, n, grid);
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