#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
We have to check if player can win the championship

- Find total sum of tokens
- Make vector in sorted order w.r.t value of token
- Last player with max value will always win, c = 1
- Then from (n-2)th index subtract token value from sum
- And check if the sum of all the values from 0 to i is less than a[i] i.e. value of token
    if yes, break
    else, c++ (Incrementing no of winners)
- Output all indexes of players that can win from n-1 to n-1-c+1
*/
void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> a;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
        a.push_back(make_pair(x, i + 1));
    }
    sort(a.begin(), a.end());

    vector<int> ans;
    ll c = 1; // Last player with max value will always win
    for (ll i = n - 2; i >= 0; i--)
    {
        ll token = a[i + 1].first;
        sum -= token;
        if (sum < token) // Now the sum of all the values from 0 to i is less than a[i] i.e. value of token
        {
            break;
        }
        else // no of players that can win
        {
            c++;
        }
    }
    for (ll i = n - 1; i >= n - 1 - c + 1; i--) // indexes of players that can win from n-1 to n-1-c+1
    {
        ans.push_back(a[i].second);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/