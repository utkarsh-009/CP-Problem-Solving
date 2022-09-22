#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
RECURSIVE
int cntCombs(vector<int> coins, int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }

    if (n <= 0)
    {
        return 0;
    }

    if (sum < 0)
    {
        return 0;
    }

    // We either do not pick last coin or we pick last coin and subtract the last coin value from sum
    return cntCombs(coins, n - 1, sum) + cntCombs(coins, n, sum - coins[n - 1]);
}
*/

// DP
ll cntCombs(vector<int> coins, int n, int sum)
{
    vector<int> numOfCombs(sum + 1, 0);
    numOfCombs[0] = 1;

    for (int j = 0; j < n; j++)
    {
        for (int val = 1; val <= sum; val++)
        {
            if (val - coins[j] >= 0)
            {
                numOfCombs[val] = (numOfCombs[val] + numOfCombs[val - coins[j]]) % mod;
            }
        }
    }

    return numOfCombs[sum] % mod;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << cntCombs(coins, n, x);
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