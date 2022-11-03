#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    vector<int> pos(n), neg(n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            pos[i] = 26 - (a[i] - b[i]);
            neg[i] = -(a[i] - b[i]);
        }
        else
        {
            pos[i] = 26 - (b[i] - a[i]);
            neg[i] = -(b[i] - a[i]);
        }
    }

    int ans1 = pos[0], ans2 = neg[0];
    int i = 1;
    while (i < n)
    {
        if (ans1 < 0)
        {
            ans1 += pos[i];
        }
        else if (ans1 >= 0)
        {
            ans1 += neg[i];
        }

        if (ans2 > 0)
        {
            ans1 += neg[i];
        }
        i++;
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