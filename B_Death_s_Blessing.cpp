#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll high = n - 1, low = 0;
    ll time = 0;
    while (low < high)
    {
        if (b[high] > b[low])
        {
            time += a[low] + b[low];
            low++;
        }
        else
        {
            time += a[high] + b[high];
            high--;
        }
    }

    cout << time + a[low];
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