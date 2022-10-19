#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1;
    cin >> s2;

    map<char, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        mp1[s1[i]]++;
        mp2[s2[i]]++;
    }

    int ans = 0;
    bool dist = true;
    for (int i = 97; i <= 122; i++)
    {
        if (mp1[i] != 0 && mp1[i] != 0)
        {
            dist = false;
            ans = max(ans, min(mp1[i], mp2[i]));
        }
    }

    if (dist)
    {
        ans = 0;
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