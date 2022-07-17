#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<string> v(n);
    vector<string> ans;

    if (n == 1)
    {
        string s;
        cin >> s;
        cout << 1 << endl;
        cout << s;
        return;
    }

    bool pushed = false;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v[i] = s;

        if (s.length() == 1 && s != "0" && pushed == false)
        {
            pushed = true;
            ans.push_back(s);
        }

        if (s == "100" || s == "0")
        {
            v[i] = 99;
            ans.push_back(s);
        }
    }

    for (int j = 0; j < n; j++)
    {
        string s = v[j];
        if (s.length() > 1)
        {
            if (s.at(1) == '0')
            {
                ans.push_back(s);
                break;
            }
        }
    }

    if (ans.size() == 0)
    {
        ans.push_back(v[0]);
    }

    cout << ans.size() << endl;

    for (string x : ans)
    {
        cout << x << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}