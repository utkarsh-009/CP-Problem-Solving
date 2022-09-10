#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;

    // M1:
    /*
        int a = 0;
        while (s.length() > 1)
        {
            bool move = false;
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] != s[i - 1])
                {
                    a++;
                    move = true;
                    s.erase(i - 1, 2);
                    break;
                }
            }

            if (move == false)
            {
                break;
            }
        }

        ((a % 2 == 0) ? cout << "NET" : cout << "DA");
    */

    // M2:
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
    }

    ((min(cnt0, cnt1) % 2 == 0) ? cout << "NET" : cout << "DA");
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