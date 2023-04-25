#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int m, r, n;
        cin >> m >> r >> n;

        vector<int> xi;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            xi.push_back(x);
        }

        bool ok = true, done = false;
        int cnt = 0;
        int low = 0, high = 0;
        int j = 0;

        while (j < n && ok)
        {
            // last light to cover freeway
            if (xi[j] - r <= low && xi[j] + r >= m)
            {
                cnt++;
                high = max(high, xi[j] + r);
                break;
            }
            else if (xi[j] - r <= low)
            {
                // last light to cover lhs area
                int x = 0;
                while (xi[j] - r <= low)
                {
                    x = xi[j];
                    j++;
                }

                cnt++;
                low = x + r;
                high = max(high, x + r);
            }
            else
            {
                ok = false;
            }
        }

        if (high < m)
            ok = false;

        string ans = (ok) ? to_string(cnt) : "IMPOSSIBLE";
        cout << "Case #" << i << ": " << ans << endl;
    }
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/