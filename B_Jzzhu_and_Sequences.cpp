#include <bits/stdc++.h>
#define ll long long
using namespace std;

int M = 1000000007;

void solve()
{
    int x, y;
    cin >> x >> y;

    int n;
    cin >> n;

    int mod6 = ((n % 6) % M + M) % M;

    if (mod6 == 0)
    {
        cout << ((x - y) % M + M) % M;
    }

    else if (mod6 == 1)
    {
        cout << (x % M + M) % M;
    }

    else if (mod6 == 2)
    {
        cout << (y % M + M) % M;
    }

    else if (mod6 == 3)
    {
        cout << ((y - x) % M + M) % M;
    }

    else if (mod6 == 4)
    {
        cout << ((-x) % M + M) % M;
    }

    else if (mod6 == 5)
    {
        cout << ((-y) % M + M) % M;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}