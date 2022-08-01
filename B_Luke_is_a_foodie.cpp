#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> a(n);
    int cnt = 0, v = 0, mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a[i] = num;
        mx = max(num, mx);
        mn = min(num, mn);
    }
    v = (mx + mn) / 2;

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - v) > x)
        {
            if (a[i] - v > x)
            {
                v = a[i] - x;
            }

            else
            {
                v = x - a[i];
            }
            cnt++;
        }
    }
    cout << cnt;
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