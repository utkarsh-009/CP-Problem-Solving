#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    ll a1, a2, b1, b2, n1, n2;
    a1 = a2 = a;
    b1 = b2 = b;
    n1 = n2 = n;

    // C1: all decrement op on a
    if (a1 - n >= x)
    {
        a1 = a1 - n;
    }
    else
    {
        n1 -= (a1 - x);
        a1 = x;
        b1 = ((b1 - n1 > y) ? b1 - n1 : y);
    }

    // C2: all decrement op on b
    if (b2 - n >= y)
    {
        b2 = b2 - n;
    }
    else
    {
        n2 -= (b2 - y);
        b2 = y;
        a2 = ((a2 - n2 > x) ? a2 - n2 : x);
    }

    // cout << a1 << " " << b1 << " " << a2 << " " << b2;
    cout << min(a1 * b1, a2 * b2);
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
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/