#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, k;
    cin >> n >> k;

    // vector<int> a(k);
    if (n == k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << 1 << " ";
        }
    }
    else if (n < k)
    {
        cout << "NO";
    }
    else
    {
        ll sumO = k - 1, sumE = 2 * (k - 1);
        ll lastO = n - sumO, lastE = n - sumE;

        if (lastO > 0 && lastO % 2 != 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << lastO;
        }
        else if (lastE > 0 && lastE % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << lastE;
        }
        else
        {
            cout << "NO";
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