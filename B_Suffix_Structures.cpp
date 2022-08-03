#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool arr(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    unordered_map<char, int> freq1, freq2;

    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        freq2[s2[i]]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (freq1[s1[i]] != freq2[s1[i]])
        {
            return false;
        }
    }

    return true;
}

bool automaton(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return false;
    }

    int i = 0, j = 0;
    while (true)
    {
        if (j == s2.length())
        {
            return true;
        }

        if (i >= s1.length())
        {
            return false;
        }

        if (s1[i] != s2[j])
        {
            i++;
        }

        else
        {
            i++;
            j++;
        }
    }

    return false;
}

bool both(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return false;
    }

    unordered_map<char, int> freq1, freq2;

    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        freq2[s2[i]]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (freq1[s2[i]] < freq2[s2[i]])
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    if (automaton(s1, s2))
    {
        cout << "automaton";
    }
    else if (arr(s1, s2))
    {
        cout << "array";
    }
    else if (both(s1, s2))
    {
        cout << "both";
    }
    else
    {
        cout << "need tree";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}