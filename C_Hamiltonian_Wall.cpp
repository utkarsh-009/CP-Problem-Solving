#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
// M1: In each iteration, we keep the track of brush for each column

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
                cin >> wall[i][j];
            }
        }

        bool r0 = true, r1 = true;
        for (int j = 0; j < n; j++)
        {
            if (wall[0][j] == 'B' && wall[1][j] == 'B')
            {
                swap(r0, r1);
            }
            else if (wall[0][j] == 'B')
            {
                r1 = false;
            }
            else if (wall[1][j] == 'B')
            {
                r0 = false;
            }
            else
            {
                cout << "NO";
                return;
            }
        }

        ((r0 || r1) ? cout << "YES" : cout << "NO");
    }
*/

// M2: DP

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
            cin >> wall[i][j];
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