#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
/*
2 3 4 3 2
3 5 12 20

5 + 12 + 3 + 5 + 5

5 4 3 2 1
10 40 90 160 250

if(i <= n/2)
{
    ans += c[i];
}
else
{
    ans += c[ptr];
    ptr++
}
10 + 40 + 90 + 10 + 40 => 190
*/
void solve()
{
    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    vector<int> k(n + 1), c(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> k[i];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> c[i];
    }

    ll ptr = 1;

    sort(k.begin() + 1, k.end());
    for (int i = n; i >= 1; i--)
    {
        if (ptr <= m)
        {
            if (min(c[ptr], c[k[i]]) == c[ptr])
            {
                ans += c[ptr];
                ptr++;
            }
            else
            {
                ans += c[k[i]];
            }
        }
        else
        {
            ans += c[k[i]];
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