#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
/*
if b >= a,
- b%a = 0 => lcm(a,b) = b i.e. Less than n
- b%a != 0 => lcm(a,b) will be atleast 2*b
    Since b is atleast n/2 i.e. b >= n/2 => 2*b >= n
=> b%a = 0 is optimal solution.
As a + b = n, and as 'a' is divisor of itself and 'b' is also divisor of a => n is divisor of b
Hence, we need to search for a only among the divisors of n and will be b = n-a
*/
void solve()
{
    ll n;
    cin >> n;

    int a = 1, b = n - 1;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            a = n / i, b = n - a;
            break;
        }

    cout << a << " " << b;
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