#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(int a, int b)
{
    return (a * b / gcd(a, b));
}

void solve()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    int s_len = s.length(), t_len = t.length();

    if (t_len == min(s_len, t_len))
    {
        swap(s, t);
        s_len = s.length(), t_len = t.length();
    }

    bool isSubstring = false;
    for (int i = 0; i < t_len; i++)
    {
        if (t.substr(i, s_len) == s)
        {
            isSubstring = true;
            break;
        }
    }

    if (!isSubstring)
    {
        cout << -1;
    }
    else
    {

        int ans_len = lcm(s_len, t_len);
        string ans = s;
        for (int i = 0; i < ans_len / s_len - 1; i++)
        {
            ans += s;
        }

        bool ok = true;
        for (int i = 0; i < ans_len; i += s_len)
        {
            if (ans.substr(i, s_len) != s)
            {
                ok = false;
                break;
            }
        }

        for (int i = 0; i < ans_len; i += t_len)
        {
            if (ans.substr(i, t_len) != t)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << ans;
        }
        else
        {
            cout << -1;
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