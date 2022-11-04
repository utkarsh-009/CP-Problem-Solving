#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        vector<pair<int, int>> ans;

        int bidx = 1, pos = 3 * n - 1;
        while (bidx + 3 < pos)
        {
            ans.push_back(make_pair(bidx, pos));
            bidx += 3;
            pos -= 3;
        }

        if (n % 2)
        {
            ans.push_back(make_pair(bidx, pos + 1));
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
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