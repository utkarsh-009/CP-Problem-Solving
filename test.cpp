#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    map<char, vector<int>> let_to_ind;

    for (int i = 0; i < n; ++i)
    {
        let_to_ind[s[i]].push_back(i);
    }

    int direction = (s[0] < s[n - 1]) ? 1 : -1;
    vector<int> ans;

    for (char c = s[0]; c != s[n - 1] + direction; c += direction)
    {
        for (auto now : let_to_ind[c])
        {
            ans.push_back(now);
        }
    }

    int cost = 0;
    for (int i = 1; i < ans.size(); i++)
        cost += abs(s[ans[i]] - s[ans[i - 1]]);

    cout << cost << " " << ans.size() << '\n';
    for (auto now : ans)
    {
        cout << now + 1 << " ";
    }
    cout << '\n';
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
        // cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/