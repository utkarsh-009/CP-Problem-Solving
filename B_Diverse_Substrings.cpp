#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Maximum Diversified String would consist of frequency of all characters ('0','1','2',..'9') equal to 10
i.e. max length of string possible is 100.
Hence, we only need to check whether each substring of length l≤100 is diverse.
TC: O(n*100)
*/

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        map<char, int> mp;
        int distinct = 0, maxf = INT_MIN;
        for (int j = i; j < n && ++mp[s[j]] <= 10; j++)
        {
            maxf = max(maxf, mp[s[j]]);
            if (mp[s[j]] == 1)
            {
                distinct++;
            }

            if (distinct >= maxf)
            {
                ans++;
            }
        }
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