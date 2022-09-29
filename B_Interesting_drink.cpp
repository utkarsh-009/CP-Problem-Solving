#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int q;
    cin >> q;
    vector<int> max_allow(q);
    for (int i = 0; i < q; i++)
    {
        cin >> max_allow[i];
    }

    sort(prices.begin(), prices.end());
    for (int i = 0; i < q; i++)
    {
        int curr_allow = max_allow[i];

        auto upper = upper_bound(prices.begin(), prices.end(), curr_allow);
        cout << upper - prices.begin() << endl;
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
