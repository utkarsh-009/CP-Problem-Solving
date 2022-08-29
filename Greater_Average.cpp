#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    double a, b, c;
    cin >> a >> b >> c;

    (((a + b) / 2 > c) ? cout << "YES" : cout << "NO");
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