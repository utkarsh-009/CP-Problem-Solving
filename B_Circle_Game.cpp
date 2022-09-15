#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    int piles[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> piles[i];
    }

    if (n % 2 != 0)
    {
        cout << "Mike";
    }
    else
    {
        int min_ind = 1;
        for (int i = 1; i <= n; i++)
        {
            if (piles[i] < piles[min_ind])
            {
                min_ind = i;
            }
        }

        if (min_ind % 2 == 0)
        {
            cout << "Mike";
        }
        else
        {
            cout << "Joe";
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/