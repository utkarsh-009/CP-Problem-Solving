#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("day6INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    string s;
    cin >> s;

    int n = s.length();

    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        set<char> st;
        for (j = i; j < i + 4; j++)
        {
            st.insert(s[j]);
        }

        if (st.size() == 4)
        {
            break;
        }
    }

    cout << j;
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