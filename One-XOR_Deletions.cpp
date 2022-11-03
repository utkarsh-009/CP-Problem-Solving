#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> mp;

    int f_max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        f_max = max(f_max, mp[arr[i]]);
    }

    int ans = n;
    for (auto m : mp)
    {
        int x = 0;
        if (m.first & 1)
        {
            x = m.first - 1;
        }
        else
        {
            x = m.first + 1;
        }

        int f = m.second;
        auto it = mp.find(x);
        if (it != mp.end())
        {
            f += mp[x];
        }
        ans = min(ans, n - f);
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/