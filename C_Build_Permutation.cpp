#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int t;
    cin >> t;

    vector<int> pf;
    for (int i = 0; i * i <= 102000; i++)
    {
        pf.push_back(i * i);
    }

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans(n), used(n);
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = pf.size() - 1; j >= 0; j--)
            {
                int x = pf[j];
                if (x - i < n && !used[x - i])
                {
                    ans[i] = x - i;
                    used[x - i] = true;
                    break;
                }
            }
        }
        for (int x : ans)
        {
            cout << x << " ";
        }

        cout << endl;
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