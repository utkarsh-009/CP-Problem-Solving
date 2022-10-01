#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> boys(n);

    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }

    int m;
    cin >> m;
    vector<int> girls(m);

    for (int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        if (girls[j] >= boys[i])
        {
            if (girls[j] - boys[i] <= 1)
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        else
        {
            if (boys[i] - girls[j] <= 1)
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }

    cout << cnt;
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