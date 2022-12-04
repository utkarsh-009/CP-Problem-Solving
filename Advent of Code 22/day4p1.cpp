#include <bits/stdc++.h>
#include <sstream>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("day4INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t;
    cin >> t;

    int ans = 0;
    for (int q = 0; q < t; q++)
    {
        string s;
        cin >> s;

        int l1, r1, l2, r2;

        string num = "";

        int i = 0;
        while (s[i] != '-')
        {
            num += s[i];
            i++;
        }
        istringstream(num) >> l1;
        // cout << num << endl;

        num = "";
        i++;
        while (s[i] != ',')
        {
            num += s[i];
            i++;
        }
        istringstream(num) >> r1;
        // cout << num << endl;

        num = "";
        i++;
        while (s[i] != '-')
        {
            num += s[i];
            i++;
        }
        istringstream(num) >> l2;

        // cout << num << endl;
        num = "";
        i++;
        while (i != s.length())
        {
            num += s[i];
            i++;
        }
        // cout << num << endl;
        istringstream(num) >> r2;
        // cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
        if (l1 <= l2 && r2 <= r1 || l2 <= l1 && r1 <= r2)
        {
            ans++;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/