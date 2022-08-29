#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int x;
    cin >> x;

    ((x <= 300) ? cout << 3000 : cout << x * 10);
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