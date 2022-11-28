#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 2, 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(n + 2, 1);
    for (ll i = 1; i <= n + 1; i++)
    {
        b[i] = lcm(a[i], a[i - 1]);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (gcd(b[i], b[i + 1]) != a[i])
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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