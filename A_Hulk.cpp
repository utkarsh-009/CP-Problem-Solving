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
        cout << "I hate it";
        return;
    }

    string s1 = "I hate", s2 = "I love";

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << s1;
        }
        else
        {
            cout << s2;
        }

        if (i != n - 1)
        {
            cout << " that ";
        }
        if (i == n - 1)
        {
            cout << " it ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/