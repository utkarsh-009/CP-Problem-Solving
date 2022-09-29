#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == 1 || m == 1)
    {
        cout << 1 << " " << 1;
    }
    else if (n == 3 && m == 3 || n == 2 && m == 3 || n == 3 && m == 2 || n == 2 && m == 2)
    {
        cout << 2 << " " << 2;
    }
    else
    {
        cout << n << " " << m;
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