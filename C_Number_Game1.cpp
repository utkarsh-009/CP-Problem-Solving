#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// FastestFinger wins for n=1, n=2^x where (x > 1) and n= 2*p where p is a prime ≥ 3 else Ashishgup wins.
void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    string p1 = "Ashishgup", p2 = "FastestFinger";
    if (n == 1)
    {
        cout << p2;
    }
    else if (n > 2 && n % 2 == 0)
    {
        if ((n & (n - 1)) == 0)
        {
            cout << p2;
        }
        else if (n / 2 >= 3 && checkPrime(n / 2))
        {
            cout << p2;
        }
        else
        {
            cout << p1;
        }
    }
    else
    {
        cout << p1;
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
        cout << '\n';
    }
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/