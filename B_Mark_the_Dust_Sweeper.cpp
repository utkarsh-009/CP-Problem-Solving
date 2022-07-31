#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool non0 = false;
    ll cnt = 0, start = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        sum += a[i];
        if (a[i] != 0 && !non0)
        {
            non0 = true;
            start = i;
        }

        if (non0 && a[i] == 0)
        {
            if (a[start] > 1)
            {
                a[start]--;
                a[i]++;
            }
            else if (a[start] == 1)
            {
                a[start]--;
                a[i]++;
                start++;
            }
            else if (a[start] < 1)
            {
                start++;
                a[start]--;
                a[i]++;
            }
            cnt++;
        }
    }

    cout << cnt + sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}