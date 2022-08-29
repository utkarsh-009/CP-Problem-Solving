#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;

    ll cntOdd = 0, cntEven = 0;

    if (n % 2 == 0)
    {
        cntEven = n / 2;
        cntOdd = n / 2;
    }
    else
    {
        cntEven = n / 2;
        cntOdd = n / 2 + 1;
    }

    cout << cntEven * cntOdd * 2;
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