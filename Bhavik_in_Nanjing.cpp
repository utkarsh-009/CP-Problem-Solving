#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll integerSqrt(ll x)
{
    return floor(sqrtl(x));
}

bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = integerSqrt(x);
        return (sr * sr == x);
    }
    return false;
}

ll solve(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (isPerfectSquare(n)) // n is perfect square
    {
        return (integerSqrt(n) - 1) * 3 + 1;
    }
    else if (isPerfectSquare(n + 1)) // n-1 is a perfect square
    {
        ll t = integerSqrt(n);
        return t * 3;
    }
    else // for other n
    {
        ll x = integerSqrt(n);
        return ((x - 1) * 3) + 1 + ((n - x * x) / x);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << solve(r) - solve(l - 1) << "\n";
    }
}