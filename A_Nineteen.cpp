#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, int> m;

    m.insert(make_pair('n', 0));
    m.insert(make_pair('i', 0));
    m.insert(make_pair('e', 0));
    m.insert(make_pair('t', 0));

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == 'n')
        {
            m['n']++;
        }
        if (c == 'i')
        {
            m['i']++;
        }
        if (c == 'e')
        {
            m['e']++;
        }
        if (c == 't')
        {
            m['t']++;
        }
    }

    if (m['n'] >= 5)
    {
        m['n'] = (m['n'] - 3) / 2 + 1;
    }

    else
    {
        m['n'] = m['n'] / 3;
    }

    m['e'] = m['e'] / 3;

    unordered_map<char, int>::iterator it = m.begin();

    int max19 = INT_MAX;
    for (it = m.begin(); it != m.end(); it++)
    {
        int curr = (*it).second;
        max19 = min(max19, curr);
    }

    cout << max19;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}