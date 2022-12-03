#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> s(n);
    int mx = 0, smx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == max(mx, s[i]))
        {
            smx = mx;
            mx = s[i];
        }
        else if (s[i] > smx && s[i] < mx)
        {
            smx = s[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == mx)
        {
            cout << mx - smx << " ";
        }
        else
        {
            cout << s[i] - mx << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/