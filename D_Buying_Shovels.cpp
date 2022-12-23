#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, k;
    cin >> n >> k;

    int ans = n;

    //  finding the maximum divisor of the number n not greater than k
    for (int j = 1; j * j <= n; j++)
    {
        // NOTE: n and n/j are both divisors of n
        if (n % j == 0)
        {
            if (j <= k)
            {
                ans = min(ans, n / j);
            }

            if (n / j <= k)
            {
                ans = min(ans, j);
            }
        }
    }

    cout << ans;
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
        cout << '\n';
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/