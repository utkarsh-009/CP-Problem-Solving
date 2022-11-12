#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

const int sz = 5005;
int minMoves[sz][sz];

void solve()
{
    string s, p;
    cin >> s;
    cin >> p;

    for (int i = 0; i <= s.length(); i++)
    {
        minMoves[i][0] = i;
    }

    for (int j = 0; j <= p.length(); j++)
    {
        minMoves[0][j] = j;
    }

    for (int i = 1; i <= s.length(); i++)
    {
        for (int j = 1; j <= p.length(); j++)
        {
            if (s[i - 1] == p[j - 1])
            {
                minMoves[i][j] = minMoves[i - 1][j - 1];
            }
            else
            {
                minMoves[i][j] = min(minMoves[i - 1][j - 1], min(minMoves[i - 1][j], minMoves[i][j - 1])) + 1;
            }
        }
    }

    cout << minMoves[s.length()][p.length()];
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