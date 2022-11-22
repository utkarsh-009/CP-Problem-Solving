#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*

*/
void solve()
{
    int n;
    cin >> n;

    vector<bool> used(n + 1, false);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<>());
    bool ok = true;
    for (int i = 0; i < n && ok; i++)
    {
        int x = a[i];
        while (x > n || used[x])
        {
            x /= 2;
        }

        ((x > 0) ? used[x] = true : ok = false);
    }

    ((ok) ? cout << "YES" : cout << "NO");
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