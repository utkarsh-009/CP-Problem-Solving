#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll mod_exp(ll a, ll b)
{
    int res = 1; // Initialize result
    a = a % mod; // Update x if it is more than or equal to p
    if (a == 0)
        return 0; // In case x is divisible by p;

    while (b > 0)
    {
        // If y is odd, multiply x with result
        if (b & 1)
            res = (res * a) % mod;

        // y must be even now
        b = b >> 1; // y = y/2
        a = (a * a) % mod;
    }
    return res;
}

/*
    series=> 1 + 7 + 22 + 50 + 95 +... [n(2*n-1)]
    Σ n² [1 to n] + Σ (n² - n) [1 to n-1]
*/

ll sum_square(ll n)
{
    ll ans = (((n * (n + 1)) % mod) * (2 * n + 1) % mod) % mod;
    ans = (ans * mod_exp(6, mod - 2)) % mod;

    return ans;
}
ll sum_linear(ll n)
{
    ll ans = (n * (n + 1)) % mod;
    ans = (ans * mod_exp(2, mod - 2)) % mod;

    return ans;
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n;
    cin >> n;

    ll ans = sum_square(n) % mod;
    ans = (ans + sum_square(n - 1)) % mod;
    ans = (ans + sum_linear(n - 1)) % mod;
    ans = (ans * 2022) % mod;

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
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/