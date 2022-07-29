#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    double dist = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));

    cout << (ceil)(dist / (2 * r)) << endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}