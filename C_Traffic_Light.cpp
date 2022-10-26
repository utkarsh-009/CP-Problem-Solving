#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    char l;
    cin >> n >> l;

    string s;
    cin >> s;

    if (l == 'g')
    {
        cout << 0;
    }
    else
    {
        vector<int> g;
        int maxx = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                g.push_back(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == l)
            {
                auto lower = lower_bound(g.begin(), g.end(), i);
                int dist = *lower - i;
                if (lower == g.end())
                {
                    dist = n - i + g[0];
                }

                maxx = max(maxx, dist);
            }
        }

        cout << maxx;
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