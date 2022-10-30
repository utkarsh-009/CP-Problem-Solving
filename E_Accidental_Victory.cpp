#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

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
    ll c = 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        ll token = a[i + 1].first;
        sum -= token;
        if (sum < token)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    for (ll i = n - 1; i >= n - 1 - c + 1; i--)
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