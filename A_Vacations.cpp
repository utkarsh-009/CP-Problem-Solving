#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// 0,1,2->rest,test,gym
int recur(vector<int> &a, int i, int last, vector<vector<int>> &dp)
{
    if (i >= a.size())
        return 0;

    // already pre-computed
    if (dp[i][last] != -1)
        return dp[i][last];

    // no gym, no test
    if (a[i] == 0)
        return dp[i][last] = 1 + recur(a, i + 1, 0, dp);

    // no gym but test
    else if (a[i] == 1)
    {
        if (last == 1)
        {
            return dp[i][last] = 1 + recur(a, i + 1, 0, dp);
        }
        else
        {
            return dp[i][last] = recur(a, i + 1, 1, dp);
        }
    }

    // gym but no test
    else if (a[i] == 2)
    {
        if (last == 2)
        {
            dp[i][last] = 1 + recur(a, i + 1, 0, dp);
        }
        else
        {
            dp[i][last] = recur(a, i + 1, 2, dp);
        }
    }

    // gym and contest
    else
    {
        // test
        int c1 = ((last == 1) ? INT_MAX : recur(a, i + 1, 1, dp));

        // gym
        int c2 = ((last == 2) ? INT_MAX : recur(a, i + 1, 2, dp));

        dp[i][last] = min(c1, c2);

        return dp[i][last];
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(3, -1));

    cout << recur(a, 0, 0, dp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/