/*
NAIVE APPROACH

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string, string>> words;
    for (int i = 0; i < m; i++)
    {
        string w1, w2;
        cin >> w1 >> w2;

        pair<string, string> p = make_pair(w1, w2);
        words.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        for (auto it = words.begin(); it != words.end(); it++)
        {
            if (it->first == word)
            {
                ((it->first.length() > it->second.length()) ? cout << it->second << " " : cout << it->first << " ");
            }

            if (it->second == word)
            {
                ((it->first.length() > it->second.length()) ? cout << it->second << " " : cout << it->first << " ");
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

*/

// BETTER APPROACH

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mp;
    unordered_map<string, int> lang;

    for (int i = 0; i < m; i++)
    {
        string w1, w2;
        cin >> w1 >> w2;

        mp[w1] = w2;
        mp[w2] = w1;

        lang[w1] = 1;
        lang[w2] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;

        string s1, s2;
        if (lang[w] == 1)
        {
            s1 = w;
            s2 = mp[w];
        }
        else
        {
            s1 = mp[w];
            s2 = w;
        }

        ((s1.length() > s2.length()) ? cout << s2 << " " : cout << s1 << " ");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
