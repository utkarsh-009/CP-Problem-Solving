#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x].push_back(i);
    }

    vector<int> ans(n);
    for (auto x : mp)
    {
        int idx = x.first;
        int cnt = 1;
        vector<int> v = x.second;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i - 1] % 2 == 0 && v[i] % 2 != 0)
            {
                cnt++;
            }
            else if (v[i - 1] % 2 != 0 && v[i] % 2 == 0)
            {
                cnt++;
            }
        }
        ans[idx - 1] = cnt;
    }

    for (int x : ans)
    {
        cout << x << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/