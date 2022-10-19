#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i * 11 <= 1000000000; i++)
    {
        for (int j = 0; j * 111 <= 100000000; j++)
        {
            if (i * 11 + j * 111 == n)
            {
                
                cout << "YES";
                return;
            }
            else if (i * 11 + j * 111 > n)
            {
                break;
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
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/