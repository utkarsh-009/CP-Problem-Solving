#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k == 0)
    {
        cout << "NO" << endl;
        return;
    }

    bool possible = true; // n/2 splits possible
    for (int i = 1; i <= n; i += 2)
    {
        ll a = i, b = i + 1;
        if (((a + k) * b) % 4 != 0 && ((b + k) * a) % 4 != 0)
        {
            possible = false;
            break;
        }
    }

    if (possible == false)
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i += 2)
        {
            ll a = i, b = i + 1;
            if (((a + k) * b) % 4 == 0)
            {

                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
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
    }
}