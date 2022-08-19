#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n, m, a;
    cin >> n >> m >> a;

    ll total = 0;
    ll r = 0, c = 0;

    if (n <= a && m <= a)
    {
        total = 1;
    }
    else if (n <= a)
    {
        ((m % a == 0) ? total = m / a : total = m / a + 1);
    }
    else if (m <= a)
    {
        ((n % a == 0) ? total = n / a : total = n / a + 1);
    }
    else if (m > a && n > a)
    {
        ((m % a == 0) ? r = m / a : r = m / a + 1);
        ((n % a == 0) ? c = n / a : c = n / a + 1);

        total = r * c;
    }

    cout << total;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}