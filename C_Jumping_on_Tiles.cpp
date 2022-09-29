#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool myCmp1(pair<char, int> a, pair<char, int> b)
{
    return a.first < b.first;
}

bool myCmp2(pair<char, int> a, pair<char, int> b)
{
    return a.first > b.first;
}

void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    vector<pair<char, int>> path_idx;

    int startVal = s[0] - 'a' + 1, endVal = s[n - 1] - 'a' + 1;

    int min_cost = abs(endVal - startVal);
    if (n == 2)
    {
        cout << min_cost << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            int currVal = s[i] - 'a' + 1;
            if (min(startVal, endVal) <= currVal && currVal <= max(startVal, endVal))
            {
                path_idx.push_back(make_pair(s[i], i + 1));
            }
        }

        ((endVal >= startVal) ? sort(path_idx.begin() + 1, path_idx.end() - 1, myCmp1) : sort(path_idx.begin() + 1, path_idx.end() - 1, myCmp2));
        cout << min_cost << " " << path_idx.size() << endl;

        for (auto x : path_idx)
        {
            cout << x.second << " ";
        }

        cout << endl;
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