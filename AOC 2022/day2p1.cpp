#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{

#ifndef ONLINE_JUDGE
    freopen("day2INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t;
    cin >> t;

    ll total = 0;
    for (int i = 0; i < t; i++)
    {
        char p1, p2;
        cin >> p1 >> p2;

        if (p1 == 'A' && p2 == 'X') // R & R
        {
            total += 4; // (1 + 3)
        }
        else if (p1 == 'A' && p2 == 'Y') // R & P
        {
            total += 8; // (2 + 6)
        }
        else if (p1 == 'A' && p2 == 'Z') // R & S
        {
            total += 3; // (3 + 0)
        }
        if (p1 == 'B' && p2 == 'X') // P & R
        {
            total += 1; // (1 + 0)
        }
        else if (p1 == 'B' && p2 == 'Y') // P & P
        {
            total += 5; // (2 + 3)
        }
        else if (p1 == 'B' && p2 == 'Z') // P & S
        {
            total += 9; // (3 + 6)
        }
        if (p1 == 'C' && p2 == 'X') // S & R
        {
            total += 7; // (1 + 6)
        }
        else if (p1 == 'C' && p2 == 'Y') // S & P
        {
            total += 2; // (2 + 0)
        }
        else if (p1 == 'C' && p2 == 'Z') // S & S
        {
            total += 6; // (3 + 3)
        }
    }

    cout << total;
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