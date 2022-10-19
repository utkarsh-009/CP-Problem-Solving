#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*

    All 11,111,1111,1111,... can be represented as 11*x or 111*y
    Hence,
    n = 11*x + 111*y (Eqn-1)
    n = 11*(x + 10y) + y => n = 11*A + y

    Taking mod11 both sides
    n%11 = 0 + y%11
    n%11 = y%11
    => y = n%11

    if, (n - y*111)%11 == 0 => YES
    else, => NO
*/
void solve()
{
    int n;
    cin >> n;

    int y = n % 11;
    int x = n - y * 111;

    if (x >= 0 && x % 11 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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