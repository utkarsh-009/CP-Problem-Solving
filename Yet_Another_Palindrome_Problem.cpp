#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll low = 0, high = n - 1;
    while (low <= high)
    {
        b.push_back(a[high] - a[low]);
        low++;
        high--;
    }

    ll sz = b.size();
    bool ok = true;
    for (int i = 1; i < sz; i++)
    {
        if (b[i] > b[i - 1] || b[i] < 0)
        {
            ok = false;
            break;
        }
    }

    if (!ok)
    {
        cout << -1;
    }

    else
    {
        cout << b[0];
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/