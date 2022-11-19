#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<string> st;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        st.insert(s);
        v.push_back(s);
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        int len = s.length();
        bool ok = false;

        for (int i = 0; i < len - 1; i++)
        {
            string s1 = s.substr(0, i + 1), s2 = s.substr(i + 1, len - i - 1);
            if (st.find(s1) != st.end() && st.find(s2) != st.end())
            {
                ok = true;
                break;
            }
        }

        ((ok) ? ans += "1" : ans += "0");
    }

    cout << ans;
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