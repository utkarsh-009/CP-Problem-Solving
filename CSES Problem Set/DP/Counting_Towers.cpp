#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

const int maxN = 1e6 + 10; // max possible value of n => 1000000

void cntTowers()
{

    vector<vector<ll>> numberOfTowers(maxN, vector<ll>(8, 0)); // number of towers for every height 'n'

    // at 1st intersection we can choose any state
    for (int i = 0; i < 8; i++)
    {
        numberOfTowers[0][i] = 1;
    }

    for (int i = 1; i < maxN; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == 0 || j == 2 || j == 3 || j == 4 || j == 5) // when bottom part on
            {
                // bottom part on => Only when top part on
                numberOfTowers[i][j] = (numberOfTowers[i - 1][0] +
                                        numberOfTowers[i - 1][1] +
                                        numberOfTowers[i - 1][3] +
                                        numberOfTowers[i - 1][4] +
                                        numberOfTowers[i - 1][5]) %
                                       mod;
            }
            else // bottom part off
            {
                // top part off => Only when top part off
                numberOfTowers[i][j] = (numberOfTowers[i - 1][2] +
                                        numberOfTowers[i - 1][6] +
                                        numberOfTowers[i - 1][7]) %
                                       mod;
            }
        }
    }

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        cout << (numberOfTowers[n - 1][2] + numberOfTowers[n - 1][6]) % mod << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cntTowers();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/