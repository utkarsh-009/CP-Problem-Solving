#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << n * (n + 1) / 2;
        return;
    }

    int i = 1, ans = 0;
    int cnt = 1;
    bool allow = false;
    while (i < n)
    {
        if (a[i] > a[i - 1])
        {
            cnt++;
            i++;
        }
        else if (!allow && a[i - 1] > a[i])
        {
            allow = true;
            cnt++;
            i++;
        }
        else
        {
            ans += (cnt) * (cnt + 1) / 2 - cnt;
            i++;
            cnt = 0;
            allow = false;
        }
    }

    ans += (cnt) * (cnt + 1) / 2 - cnt;

    cout << ans + n;
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