#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{

#ifndef ONLINE_JUDGE
    freopen("day3p2INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t;
    cin >> t;

    ll total = 0;

    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        map<char, int> mp1, mp2, mp3;

        string s1, s2, s3;
        cin >> s1;
        cin >> s2;
        cin >> s3;

        for (int j = 0; j < s1.length(); j++)
        {
            mp1[s1[j]]++;
        }
        for (int j = 0; j < s2.length(); j++)
        {
            mp2[s2[j]]++;
        }
        for (int j = 0; j < s3.length(); j++)
        {
            mp3[s3[j]]++;
        }

        for (auto it = mp1.begin(); it != mp1.end(); it++)
        {
            char c = it->first;
            if (mp2[c] != 0 && mp3[c] != 0)
            {

                if (c >= 65 && c <= 90)
                {
                    int val = c - 'A' + 27;
                    v.push_back(val);
                }
                else
                {
                    int val = c - 'a' + 1;
                    v.push_back(val);
                }

                break;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        total += v[i];
    }

    cout << total;
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