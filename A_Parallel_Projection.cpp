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

    int w, d, h;
    int a, b, f, g;
    cin >> w >> d >> h;
    cin >> a >> b >> f >> g;

    int l1 = (f + a) + h + abs(g - b);
    int l2 = (g + b) + h + abs(f - a);
    int l3 = (2 * w - (f + a)) + h + abs(g - b);
    int l4 = (2 * d - (g + b)) + h + abs(f - a);

    cout << min(l1, min(l2, min(l3, l4)));
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