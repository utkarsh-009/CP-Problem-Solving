#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    int marbPos = s;
    int cnt = 0;
    while (n--)
    {
        if (marbPos == t)
        {
            cout << cnt;
            return;
        }

        marbPos = p[marbPos];
        cnt++;
    }

    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}