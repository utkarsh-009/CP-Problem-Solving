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

    int n;
    cin >> n;

    vector<int> e, o;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ((x % 2) ? o.push_back(x) : e.push_back(x));
    }

    bool flag = 0;
    if (o.size() % 2 == 0 && e.size() % 2 == 0)
    {
        flag = 1;
    }
    else if (o.size() % 2 != 0 && e.size() % 2 != 0)
    {
        for (int i = 0; i < o.size() && !flag; i++)
        {
            int x = o[i];
            for (int j = 0; j < e.size(); j++)
            {
                int y = e[j];
                if (abs(x - y) == 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    ((flag) ? cout << "YES" : cout << "NO");
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
        cout << '\n';
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/