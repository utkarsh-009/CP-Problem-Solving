#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int mini = INT_MAX, minpos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mini > a[i])
        {
            mini = a[i];
            minpos = i;
        }
    }

    if (minpos == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
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