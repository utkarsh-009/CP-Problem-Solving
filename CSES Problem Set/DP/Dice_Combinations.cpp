#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
RECURSIVE:

int cntCombs(int n)
{
    // Base Case
    // Combination not possible
    if (n < 0)
    {
        return 0; // Returning 0 to total count
    }

    // Combination possible
    if (n == 0)
    {
        return 1; // Returning 1 to total count
    }

    int cnt = 0;
    for (int i = 1; i <= 6; i++)
    {
        cnt += cntCombs(n - i);
    }
    return cnt % mod;
}
*/

// DP
ll cntCombs(int n)
{
    ll cnt = 0;
    vector<ll> comb(n + 1, 0);

    comb[0] = 1; // When n = 0 => There is only one combination that we do not throw any dice
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
            {
                comb[i] += (comb[i - j]) % mod;
            }
        }
    }

    return comb[n] % mod;
}

void solve()
{
    int n;
    cin >> n;

    cout << cntCombs(n);
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