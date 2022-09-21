#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int mx = INT_MIN;
    int freq = 1;
    for (int i = 1; i < s.length(); i++)
    {
        char c1 = s[i - 1];
        char c2 = s[i];

        if (c1 == c2)
        {
            freq++;
        }
        else
        {
            freq = 1;
        }
        mx = max(freq, mx);
    }

    cout << max(mx, freq);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}