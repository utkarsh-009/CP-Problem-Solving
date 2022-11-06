#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll maxlen = 1, len = 1, cnt0 = 0, cnt1 = 0;

    ((s[0] == '0') ? cnt0++ : cnt1++);

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            len++;
        }
        else
        {
            len = 1;
        }
        maxlen = max(len, maxlen);
        ((s[i] == '0') ? cnt0++ : cnt1++);
    }

    cout << max(cnt0 * cnt1, maxlen * maxlen);
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