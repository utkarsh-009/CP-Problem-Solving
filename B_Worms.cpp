#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }

    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }

    vector<int> pre(n);
    pre[0] = piles[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + piles[i];
    }

    for (int i = 0; i < m; i++)
    {
        int num = q[i];
        int lower = lower_bound(pre.begin(), pre.end(), num) - pre.begin() + 1;
        cout << lower << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/