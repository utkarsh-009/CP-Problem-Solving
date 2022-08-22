#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1), ans(n + 1);
    vector<bool> used(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << -1;
        return;
    }

    for (int i = 1; i <= n - 2; i++)
    {
        int curr = 1;
        while (a[i] == curr || used[curr])
        {
            curr++;
        }
        ans[i] = curr;
        used[curr] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            ((ans[n - 1] != 0) ? ans[n] = i : ans[n - 1] = i);
            used[i] = 1;
        }
    }

    if (ans[n - 1] == a[n - 1] || ans[n] == a[n])
    {
        swap(ans[n - 1], ans[n]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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