#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
/*
Approach:
- The minimum of all chars('0','1',...) will be at the start of the string. All the chars that are in lower position
than the last position of last minimum char will be added by 1. These all will be placed at their lexicographical position
using multiset.
- Only when lower position chars are '9' or the minimum char itself are not added by 1.
Now check the next minimum element that is not present at its lexicographical position.

Note:
Use Map to store last occurence position of every character that is present in the string.
Using Multiset we keep the notation sorted
*/
void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    map<char, int> lastPos;
    multiset<char> ms;

    for (int i = 0; i < n; i++)
    {
        lastPos[s[i]] = i;
    }

    ll curr = 0;
    for (int i = 0; i <= 9; i++)
    {
        char ch = i + '0';
        if (lastPos.find(ch) == lastPos.end())
        {
            continue;
        }

        while (curr <= lastPos[ch])
        {
            if (s[curr] == ch || s[curr] == '9')
            {
                ms.insert(s[curr]);
            }
            else
            {
                ms.insert(s[curr] + 1);
            }
            curr++;
        }
    }

    for (auto x : ms)
    {
        cout << x;
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
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/