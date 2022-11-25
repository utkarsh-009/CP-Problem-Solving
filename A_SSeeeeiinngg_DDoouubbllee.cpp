#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        s += s[i];
    }

    cout << s;
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