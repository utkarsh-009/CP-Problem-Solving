#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll s;
    cin >> s;

    ll total_spent = 0, cb = 0;
    while (s > 0)
    {
        if (s < 10)
        {
            total_spent += s;
            break;
        }

        ll x = s - (s % 10); // Amt to be spent
        s = s - x;           // Curr money
        cb = x / 10;         // Cash Back
        s += cb;             // Amt after Cash Back

        total_spent += x; // Total Spent till now
        cb = 0;
    }

    cout << total_spent;
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