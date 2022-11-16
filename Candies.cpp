#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if ((*it).second >= 3)
        {
            cout << "No";
            return;
        }
    }

    cout << "Yes";
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