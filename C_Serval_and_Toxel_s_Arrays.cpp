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

    int n, m;
    cin >> n >> m;

    map<ll, ll> mp;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x] = m + 1;
        arr[i] = x;
    }

    for (int i = 0; i < m; i++)
    {
        int p, v;
        cin >> p >> v;
        p -= 1;

        if (mp.find(arr[p]) != mp.end())
        {
            mp[arr[p]] = i - m;
        }
        else
        {
            mp[arr[p]] = 0;
        }

        arr[p] = v;

        if (mp.find(arr[p]) != mp.end())
        {
            mp[arr[p]] = m - i;
        }
        else
        {
            mp[arr[p]] = 0;
        }
    }

    ll ans = m * (m + 1) * n;
    for (auto e : mp)
    {
        ll x = e.second;
        ll s = (x * (x - 1)) / 2;
        ans -= s;
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
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/