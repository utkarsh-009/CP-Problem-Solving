#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    if (n < 2020)
    {
        cout << "NO";
        return;
    }
    else if (n % 2020 == 0 || n % 2021 == 0)
    {
        cout << "YES";
        return;
    }
    else
    {
        for (int i = 0; i * 2020 <= n; i++)
        {
            for (int j = 0; j * 2021 <= n; j++)
            {
                if (2020 * i + 2021 * j == n)
                {
                    cout << "YES";
                    return;
                }
            }
        }
    }

    cout << "NO";
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

    return 0;
}
