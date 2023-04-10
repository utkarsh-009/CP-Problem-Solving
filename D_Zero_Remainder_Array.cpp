#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        if (a % k != 0)
        {
            ll x = ((a / k) + 1) * k - a;
            mp[x]++;
        }
    }

    if (mp.size() == 0)
    {
        cout << 0;
        return;
    }

    ll ans = 0;
    for (auto x : mp)
    {
        ll num = x.first + (x.second - 1) * k;
        ans = max(ans, num);
    }

    cout << ans + 1;
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