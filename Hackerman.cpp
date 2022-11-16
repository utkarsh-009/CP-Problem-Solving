#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    if (isPrime(sum))
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
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