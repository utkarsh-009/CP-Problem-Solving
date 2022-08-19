#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, m;
    cin >> n >> m;

    if ((m - 1) % 2 != 0)
    {
        if ((n - 1) % 2 != 0)
        {
            cout << "Tonya";
        }
        else
        {
            cout << "Burenka";
        }
    }
    else
    {
        if ((n - 1) % 2 != 0)
        {
            cout << "Burenka";
        }
        else
        {
            cout << "Tonya";
        }
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