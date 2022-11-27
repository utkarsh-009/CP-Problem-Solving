#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
LLR => 0 + 1 + 0 => 1
LRRLL => 0 + 3 + 2 + 3 + 4 => 12
Storing the possible increment (maybe negative) in prefix array.
And then sorting in desc order to first get highest increment possible.
*/
void solve()
{
    ll n;
    cin >> n;

    vector<ll> pre;
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        char v;
        cin >> v;

        if (v == 'R')
        {
            total += n - i - 1;
            pre.push_back(i - (n - i - 1));
        }
        else
        {
            total += i;
            pre.push_back((n - i - 1) - i);
        }
    }

    sort(pre.begin(), pre.end(), greater<int>());
    for (ll i = 0; i < n; i++)
    {
        if (pre[i] > 0)
        {
            total += pre[i];
        }

        cout << total << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/