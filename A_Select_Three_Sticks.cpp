#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int minDiff = INT_MAX;
    for (int i = 0; i < n - 2; i++)
    {
        int diff = 0;
        for (int j = 1; j <= 2; j++)
        {
            diff += (v[i + j] - v[i + j - 1]);
        }

        minDiff = min(diff, minDiff);
    }

    cout << minDiff;
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