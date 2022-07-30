#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int low1 = min(l1, r1), high1 = max(l1, r1);
    int low2 = min(l2, r2), high2 = max(l2, r2);

    int low = max(low1, low2), high = min(high1, high2);

    ((high - low <= 0) ? cout << 0 : cout << high - low);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}