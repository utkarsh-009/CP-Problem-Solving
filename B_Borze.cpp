#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;

    map<string, string> mp;

    mp["."] = "0";
    mp["-."] = "1";
    mp["--"] = "2";

    int i = 0, n = s.length();
    string ans = "";
    while (i <= n - 1)
    {
        if (s[i] == '.')
        {
            ans += "0";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans += "1";
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            ans += "2";
            i += 2;
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