#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    string s;
    cin >> s;

    int n;
    cin >> n;

    int sz = s.length();

    vector<int> v(sz);
    v[0] = 0;
    for (int i = 1; i < sz; i++)
    {
        if (s[i] == s[i - 1])
        {
            v[i] = v[i - 1] + 1;
        }
        else
        {
            v[i] = v[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        cout << v[r - 1] - v[l - 1] << endl;
    }
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