#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int mx = INT_MIN, cnt = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == s[i])
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            cnt = 1;
        }
    }

    if (mx >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}