#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d[i] = x;
    }

    vector<int> ans(n);
    ans[0] = d[0];
    for (int i = 1; i < n; i++)
    {
        int diff = d[i];

        if (ans[i - 1] - diff > 0 && (ans[i - 1] + diff != ans[i - 1] - diff))
        {
            cout << -1;
            return;
        }
        else
        {
            ans[i] = diff + ans[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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