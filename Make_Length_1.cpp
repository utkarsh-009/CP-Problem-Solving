#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;
    st.push(s[0]);

    for (int i = 1; i < n; i++)
    {
        if (st.top() == s[i])
        {
            st.pop();
            st.push('0');
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        char c = st.top();
        st.pop();

        while (!st.empty() && st.top() == c)
        {
            st.pop();
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/