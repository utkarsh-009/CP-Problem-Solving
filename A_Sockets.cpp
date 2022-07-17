#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> fltr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fltr[i];
    }

    sort(fltr.begin(), fltr.end(), greater<int>());

    int diff = m - k;

    if (diff <= 0)
    {
        cout << 0;
        return;
    }

    int cnt = 0;
    int i = 0;
    while (diff > 0)
    {
        if (i == n)
        {
            cout << -1;
            return;
        }
        diff++;
        diff -= fltr[i];

        cnt++;
        i++;
    }

    cout << cnt;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}