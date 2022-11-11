#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    int idx0 = n - 1, idx1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            idx1 = max(idx1, i);
        }
        else if (s[i] == '0')
        {
            idx0 = min(idx0, i);
        }
    }

    cout << idx0 - idx1 + 1;
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