#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll minOper = 0, cnt0 = 0, mult = 1;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            minOper += (abs(arr[i]) - 1);
            mult *= -1;
        }
        else if (arr[i] == 0)
        {
            cnt0++;
        }
        else
        {
            minOper += (arr[i] - 1);
        }
    }

    if (cnt0 == 0 && mult == -1)
    {
        minOper += 2;
    }

    cout << minOper + cnt0;
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