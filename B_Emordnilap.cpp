#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    int i = n, fact = 1;
    while (n / i != n)
    {
        fact = (fact * i) % mod;
        i--;
    }
    return fact % mod;
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 0;
        return;
    }

    ll fact = n * (n - 1);
    for (ll i = 1; i <= n; i++)
    {
        fact = (fact * i) % mod;
    }

    cout << fact;
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