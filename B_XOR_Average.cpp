#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        for (int i = 1; i <= n - 2; i++)
        {
            cout << 2 << " ";
        }

        cout << 1 << " " << 3;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << n << " ";
        }
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
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/