#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int maxe = 1;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }

    sort(a.begin(), a.end());
    ll max_score1 = 0, max_score2 = 0;
    vector<int> missing;

    int curr = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[curr] == i + 1)
        {
            curr++;
        }
        else
        {
            missing.push_back(i + 1);
        }
    }

    for (int i = 0; i < k; i++)
    {
        max_score1 += max(0, a[n - 1] - missing[i]);
    }

    for (int i = 0; i < k - 1; i++)
    {
        max_score2 += max(0, 2 * n - missing[i]);
    }

    cout << max(max_score1, max_score2);
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