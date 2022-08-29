#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    if (x + y + z == w || x + y == w || y + z == w || z + x == w || x == w || y == w || z == w)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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