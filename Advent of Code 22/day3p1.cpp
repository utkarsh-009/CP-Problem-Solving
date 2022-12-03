#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("day3p1INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t;
    cin >> t;

    ll total = 0;

    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int n = s.length();

        map<char, int> mp;
        for (int j = 0; j < n / 2; j++)
        {
            mp[s[j]]++;
        }

        for (int j = n / 2; j < n; j++)
        {
            if (mp[s[j]] != 0)
            {
                if (s[j] >= 65 && s[j] <= 90)
                {
                    int val = s[j] - 'A' + 27;
                    v.push_back(val);
                }
                else
                {
                    int val = s[j] - 'a' + 1;
                    v.push_back(val);
                }

                break;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        total += v[i];
    }

    cout << total;
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