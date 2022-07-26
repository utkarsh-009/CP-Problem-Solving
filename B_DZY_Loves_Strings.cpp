#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    vector<int> w(26);
    int mx = INT_MIN;

    for (int i = 0; i < 26; i++)
    {
        int x;
        cin >> x;
        w[i] = x;

        mx = max(mx, x);
    }

    int prod = 0, i, j;
    for (i = 0; i < s.length(); i++)
    {
        prod += (i + 1) * w[s[i] - 'a'];
    }

    for (j = i; j < i + k; j++)
    {
        prod += (j + 1) * mx;
    }

    cout << prod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}