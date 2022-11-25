#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
/*
NOTES:
C1 - If a=b, then the thermostat is already set up and the answer is 0.
C2 - else if |a−b|≥x, then it is enough to reconfigure the thermostat in 1 operation.
C3 - else if exist such temperature c, that |a−c|≥x and |b−c|≥x, then you can configure the thermostat in 2 operations.
    If such c exists between l and r, we can chose one of bounds: a→l→b or a→r→b.
C4 - we need to make 3 operations if times if we cannot reconfigure through one of the boundaries as above,
 but we can through both: a→l→r→b or a→r→l→b
*/
void solve()
{
    ll l, r, x;
    cin >> l >> r >> x;

    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0;
    }
    else if (abs(a - b) >= x)
    {
        cout << 1;
    }
    else if (r - max(a, b) >= x || min(a, b) - l >= x)
    {
        cout << 2;
    }
    else if ((r - b >= x && a - l >= x) || (r - a >= x && b - l >= x))
    {
        cout << 3;
    }
    else
    {
        cout << -1;
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