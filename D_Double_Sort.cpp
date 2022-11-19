#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= a[i] && b[j] <= b[i])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);

                ans.push_back({j+1, i+1});
            }
        }
    }

    if (is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end()))
    {
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/