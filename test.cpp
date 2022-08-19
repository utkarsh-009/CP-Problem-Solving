#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> ans;

    if (k % 2 != 0)
    {
        for (ll i = 1; i <= n; i += 2)
        {
            ans.push_back(make_pair(i, i + 1));
        }
    }
    else
    {
        for (ll i = 1; i <= n; i += 2)
        {
            if (((k + i + 1) * i) % 4 == 0)
            {
                ans.push_back(make_pair(i + 1, i));
            }
            else if (((k + i) * (i + 1)) % 4 == 0)
            {
                ans.push_back(make_pair(i, i + 1));
            }
        }
    }

    if (ans.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
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
    }
}