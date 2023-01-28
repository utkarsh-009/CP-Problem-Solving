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

    ll n;
    cin >> n;

    vector<pair<ll, ll>> ab;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        ab.push_back({x, y});
    }

    sort(ab.begin(), ab.end());
    int min_day = min(ab[0].first, ab[0].second);

    for (int i = 1; i < n; i++)
    {
        int actual = ab[i].first;
        int scheduled = ab[i].second;

        int suitable_day;
        if (min_day <= scheduled)
        {
            suitable_day = scheduled;
        }
        else
        {
            suitable_day = actual;
        }

        min_day = suitable_day;
    }

    cout << min_day << endl;
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