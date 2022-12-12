#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSafe(vector<vector<char>> wall, map<pair<int, int>, bool> visited, int x, int y, int n)
{
    if (x < 0 || x >= 2 || y < 0 || y >= n || visited[{x, y}] == true)
    {
        return false;
    }

    return true;
}

bool helper(vector<vector<char>> wall, map<pair<int, int>, bool> &visited, int i, int j)
{
    if (wall[i][j] == 'B')
    {
        visited[{i, j}] = true;
        return true;
    }

    if (isSafe(wall, visited, i, j, wall[0].size()))
    {

        visited[{i, j}] = true;
        if (helper(wall, visited, i + 1, j))
        {
            return true;
        }

        if (helper(wall, visited, i + 1, j))
        {
            return true;
        }

        visited[{i, j}] = false;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;

    int black = 0;
    vector<vector<char>> wall(2, vector<char>(n));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;

            wall[i][j] = ch;
            if (wall[i][j] == 'B')
            {
                black++;
            }
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