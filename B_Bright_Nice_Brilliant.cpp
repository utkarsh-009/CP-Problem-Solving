#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
    }

    else
    {
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;

        for (int i = 2; i < n; i++)
        {
            int no_of_rooms = i;
            cout << 1 << " ";
            for (int j = 0; j <= no_of_rooms - 2; j++)
            {
                cout << 0 << " ";
            }
            cout << 1 << " " << endl;
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/