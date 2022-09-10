#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> mp;
    for (int i = 1; i < n; i++)
    {
        string subStr = "";
        subStr += s[i - 1];
        subStr += s[i];

        mp[subStr]++;
    }

    int maxf = INT_MIN;
    string ans;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (maxf < it->second)
        {
            maxf = it->second;
            ans = it->first;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/