#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll i = 1, j = n - 1;

    ll cnt = 0;
    while (i <= n - 1 && j >= 1)
    {
        cnt += (i * j) + 1;

        i++;
        j--;
    }

    cout << cnt + 1;
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