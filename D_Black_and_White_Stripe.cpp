#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int w = 0, b = 0;

    vector<char> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
        (v[i] == 'B' ? b++ : w++);
    }

    int ans = w;

    for (int i = k; i < n; i++)
    {
        (v[i] == 'B' ? b++ : w++);

        (v[i - k] == 'B' ? b-- : w--);

        ans = min(w, ans);
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