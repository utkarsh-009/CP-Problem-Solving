#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    vector<ll> leftToRight(n), rightToLeft(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        int diffLR = 0, diffRL = 0;
        if (a[i - 1] > a[i])
        {
            diffLR = a[i - 1] - a[i];
        }

        if (a[n - i] > a[n - i - 1])
        {
            diffRL = a[n - i] - a[n - i - 1];
        }

        leftToRight[i] = diffLR + leftToRight[i - 1];
        rightToLeft[n - i - 1] = diffRL + rightToLeft[n - i];
    }

    for (int i = 0; i < m; i++)
    {
        int s, t;
        cin >> s >> t;

        int start = s - 1, end = t - 1;
        if (start <= end)
        {
            cout << leftToRight[end] - leftToRight[start] << endl;
        }

        else
        {
            cout << rightToLeft[end] - rightToLeft[start] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
