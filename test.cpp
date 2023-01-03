#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, m;
    cin >> n >> m;

    ll sum = 0;
    vector<ll> a(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        sum += a[i];
        pre[i] = sum;
    }

    for (int x : pre)
    {
        cout << x << " ";
    }
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