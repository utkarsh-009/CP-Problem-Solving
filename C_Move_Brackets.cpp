#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, flag = 0, cnt1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '(')
        {
            cnt++;
            flag = 1;
        }
        else if (c == ')' && flag)
        {
            cnt--;
        }

        if (cnt == 0)
        {
            flag = 0;
        }
    }
    int unbalanced = n / 2 - cnt;

    if (cnt >= 0)
    {
        cout << cnt;
    }

    else
    {
        cout << unbalanced + cnt;
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

    return 0;
}