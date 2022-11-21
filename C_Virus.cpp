#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> v(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    // To make house number in increasing order 
    sort(v.begin(), v.end()); 

    vector<ll> grpHouses; // to find  no of non-infected houses between two infected houses
    for (ll i = 0; i < m - 1; i++)
    {
        grpHouses.push_back(v[i + 1] - v[i] - 1);
    }

    // no of houses between last and first house
    grpHouses.push_back(n - v[m - 1] + v[0] - 1);

    ll day = 0;
    ll safeHouses = 0;
    sort(grpHouses.begin(), grpHouses.end(), greater<ll>());

    for (ll i = 0; i < grpHouses.size(); i++)
    {
        ll houses = grpHouses[i];
        houses -= (day * 2); // two days taken to make group of houses safe

        if (houses <= 0) // No more non-infected houses lefts
        {
            break;
        }

        // to make one grp of houses safe, (grpsize - 1) are saved
        safeHouses += (houses - 1);
        if (houses == 1) // Only 1 house remaining in the group
        {
            safeHouses++;
            day += 1;
            continue;
        }

        day += 2;
    }

    cout << n - safeHouses;
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