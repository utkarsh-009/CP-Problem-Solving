#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int l, r, x;
    cin >> l >> r >> x;

    int ans = r / x + r % x; // For normal case
    int num = (r / x) * x - 1;

    if (num >= l)
    {
        ans = max(ans, num / x + num % x);
    }
    cout << ans;
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