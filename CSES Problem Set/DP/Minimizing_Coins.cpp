#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
// RECURSIVE
int minCoins(int coins[], int n, int x)
{
    if (x == 0)
    {
        return 0;
    }

    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (coins[i] <= x)
        {
            int sub_res = minCoins(coins, n, x - coins[i]);

            if (sub_res != INT_MAX)
            {
                res = min(res, sub_res + 1);
            }
        }
    }

    return res;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int ans = minCoins(coins, n, x);

    if (ans == INT_MAX)
    {
        ans = -1;
    }

    cout << ans;
}
*/

// DP
ll minCoins(vector<ll> coins, ll n, ll x, vector<ll> &numOfCoins)
{
    numOfCoins[0] = 0;
    for (int value = 1; value <= x; value++) // Value
    {
        for (int j = 0; j < n; j++) //
        {
            if (value - coins[j] >= 0)
            {
                numOfCoins[value] = min(numOfCoins[value], numOfCoins[value - coins[j]] + 1);
            }
        }
    }

    return ((numOfCoins[x] == INT_MAX) ? -1 : numOfCoins[x]);
}

void solve()
{

    ll n, x;
    cin >> n >> x;

    vector<ll> coins(n);
    vector<ll> numOfCoins(x + 1, INT_MAX);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    ll ans = minCoins(coins, n, x, numOfCoins);
    cout << ans;
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