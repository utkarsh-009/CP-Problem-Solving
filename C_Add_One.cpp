#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
- Here, a[] stores frequency of every digit (0,1,2..,9) that occur in number 'n'
- Here, b[] stores frequency of every digit (0,1,2..,9) that occur 'n+1'
- Note that no of 1's in a[] will be equal to no of 2's in b[], simillarly for other digits
 IMP: No of 1's in b[] will be equal to no of 0's and 9's in a[]
- ans[j] variable stores length of number after performing 'j' no of operation. Hence, 'sz+10' taken into account if n = 200000
*/

const int sz = 200010; // Note 'sz = 200000+10'
ll a[10], b[10];
int dp[sz];

void preCompute()
{
    a[0] = 1; // Starting from n = 1 to n = 20010

    ll s = 0;
    for (int j = 0; j < sz; j++)
    {
        s = 0;

        b[0] = a[9] % mod;
        b[1] = a[0] % mod + a[9] % mod;
        b[2] = a[1] % mod;
        b[3] = a[2] % mod;
        b[4] = a[3] % mod;
        b[5] = a[4] % mod;
        b[6] = a[5] % mod;
        b[7] = a[6] % mod;
        b[8] = a[7] % mod;
        b[9] = a[8] % mod;
        for (int i = 0; i <= 9; i++)
        {
            a[i] = b[i];
            s += a[i];
        }

        dp[j] = s % mod;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    ll ans = 0;
    while (n > 0)
    {
        ans += dp[m + n % 10 - 1];
        n /= 10;
    }

    cout << ans % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    preCompute();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/