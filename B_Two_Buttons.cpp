#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
ll mod_exp(ll a, ll b, ll mod)
{
    int res = 1;     // Initialize result
    a = a % mod; // Update x if it is more than or equal to p
    if (a == 0) return 0; // In case x is divisible by p;

    while (b > 0)
    {
        // If y is odd, multiply x with result
        if (b & 1)
            res = (res*a) % mod;

        // y must be even now
        b = b>>1; // y = y/2
        a = (a*a) % mod;
    }
    return res;
}
*/

// M1: Using reverse operation.
void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, m;
    cin >> n >> m;

    int clicks = 0;

    while (n < m)
    {
        if (m % 2 != 0)
        {
            m++;
        }
        else
        {
            m /= 2;
        }
        clicks++;
    }
    clicks += (n - m);

    cout << clicks;
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