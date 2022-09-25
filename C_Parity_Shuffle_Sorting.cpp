#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> e, o;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            e.push_back(i + 1);
        }
        else
        {
            o.push_back(i + 1);
        }
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return;
    }

    cout << n - 1 << endl;
    if (a[0] % 2 == 0)
    {
        for (int i = e.size() - 2; i >= 0; i--)
        {
            cout << e[i] << " " << e[i + 1] << endl;
        }
        for (int i = 0; i < o.size(); i++)
        {
            cout << 1 << " " << o[i] << endl;
        }
    }
    else
    {
        for (int i = o.size() - 2; i >= 0; i--)
        {
            cout << o[i] << " " << o[i + 1] << endl;
        }
        for (int i = 0; i < e.size(); i++)
        {
            cout << 1 << " " << e[i] << endl;
        }
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/