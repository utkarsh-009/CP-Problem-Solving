#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
b = 2*a + x, (b = sum of all elements of array b, a = sum of all elements of array a)
x = b - 2*a;
a is present at nth or n+1th position after sorting

Note: All elements less than n+1th element except n+2th
element before shuffling.
After sorting, the only possibility is that a is present at nth or n+1th position after sorting
b can be present anywhere.
- if b is present at nth pos => a1,...,an-2 = a
- if b is present at n+1th pos => a1,...,an-2 = a
- if b is present bw a1,..an-2 => we will subtract every element once from total and check if total + v[n] == v[n+1] => Solution exist else cout<<-1;
*/

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 2);
    ll total = 0;
    for (auto &x : v)
    {
        cin >> x;
        total += x;
    }
    sort(v.begin(), v.end());
    total -= (v[n] + v[n + 1]);
    if (total == v[n] || total == v[n + 1])
    {
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    bool ok = false;

    for (ll i = 0; i < n; i++)
    {
        ll temp = total - v[i];
        if (temp + v[n] == v[n + 1])
        {
            ok = true;
            v[i] = v[n];
            break;
        }
    }

    if (!ok)
        cout << -1 << endl;
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
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
    }
}

/*
9 1 7 1 6 5
1 1 5 6 7 9 => sum = 13, b[n] = 7, b[n+1] = 9
*/