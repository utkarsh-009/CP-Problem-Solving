#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    int ans[n];

    ans[n - 1] = n, ans[n - 2] = n - 1, ans[n - 3] = 1, ans[n - 4] = n - 2;

    if (n > 4)
    {
        int num = n - 3;
        for (int i = 0; i < n - 4; i++)
        {
            ans[i] = num;
            num--;
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
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
4 => 2134 => 2037
5 => 23145 => 25049
6 => 324156 => 3040511
7 => 4325167 => 40270613
8 => 54326178 => 503060
*/

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/