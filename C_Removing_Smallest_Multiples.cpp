#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> cost(n + 1); // To store cost to delete particular number
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (s[j - 1] == '1')
            {
                break;
            }
            else
            {
                if (cost[j] == 0)
                {
                    cost[j] = i;
                }
            }
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '0')
        {
            ans += cost[i];
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