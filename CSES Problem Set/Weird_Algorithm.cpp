#include <bits/stdc++.h>
#define ll long long
using namespace std;

void weirdAlgo(ll n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }

    cout << n << " ";

    if (n % 2 == 0)
    {
        weirdAlgo(n / 2);
    }

    else
    {
        weirdAlgo(n * 3 + 1);
    }
}

void solve()
{
    int n;
    cin >> n;

    weirdAlgo(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}