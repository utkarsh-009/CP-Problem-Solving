#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int cntCombs(vector<int> coins, int n, int x)
{
    if (n == 0)
    {
        return 1;
    }

    int res = 0;
    for (int j = 0; j < n; j++)
    {
        if (value - coins[j] >= 0)
        {
            res = 
        }
    }
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