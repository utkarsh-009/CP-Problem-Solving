#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll oddSum = 0, evenSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            oddSum += a[i];
        else
            evenSum += a[i];
    }

    ll totalSum = oddSum + evenSum;

    if (oddSum <= totalSum / 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                cout << 1 << " ";
            else
                cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                cout << a[i] << " ";
            else
                cout << 1 << " ";
        }
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