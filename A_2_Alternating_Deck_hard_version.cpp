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

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    int ab = 0, aw = 0, bb = 0, bw = 0;
    for (int cards = 1; n > 0; cards++)
    {
        if (cards % 4 == 1 || cards % 4 == 0)
        {
            if (n < cards)
            {
                for (int i = 0; i < n; i++)
                {
                    ((i % 2 == 0) ? aw++ : ab++);
                }
                n = 0;
            }
            else
            {
                if (cards % 2 == 0)
                {
                    ab += cards / 2;
                    aw += cards / 2;
                }
                else
                {
                    ab += cards / 2;
                    aw += cards / 2 + 1;
                }
                n -= cards;
            }
        }
        else
        {
            if (n < cards)
            {
                for (int i = 0; i < n; i++)
                {
                    ((i % 2 == 0) ? bb++ : bw++);
                }
                n = 0;
            }
            else
            {
                if (cards % 2 == 0)
                {
                    bb += cards / 2;
                    bw += cards / 2;
                }
                else
                {
                    bb += cards / 2 + 1;
                    bw += cards / 2;
                }
                n -= cards;
            }
        }
    }

    cout << aw << " " << ab << " " << bw << " " << bb;
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