#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string note = "";
    // note += s[0];

    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        string x = "";
        x.push_back(s[i - 1]);
        x.push_back(s[i]);
        if (note.find(x) != string::npos)
        {
            flag = true;
            break;
        }
        note += s[i - 1];
    }

    ((flag) ? cout << "YES" : cout << "NO");
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