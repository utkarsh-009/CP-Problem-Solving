#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<pair<int, int>> v;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end());
    int i = 1;
    for (auto x : v)
    {
        int a = x.first, idx = x.second;
        if (i % 2 != idx % 2 && mp[a] < 2)
        {
            cout << "NO";
            return;
        }

        i++;
    }

    cout << "YES";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/