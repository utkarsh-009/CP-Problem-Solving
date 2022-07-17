#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, r;
    cin >> a >> b >> r;

    int d = 2 * r;

    if (a < d || b < d)
    {
        cout << "Second";
        return;
    }

    cout << "First";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}