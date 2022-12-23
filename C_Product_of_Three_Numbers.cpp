#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n;
    cin >> n;

    ll N = n;
    vector<ll> ans;
    for (ll i = 2; i * i <= N; i++)
    {
        if (n % i == 0)
        {
            n = n / i;
            ans.push_back(i);
        }
        if (ans.size() == 2)
        {
            ans.push_back(n);
            break;
        }
    }

    if (ans.size() < 3)
    {
        cout << "NO";
    }
    else if (ans[0] == ans[2] || ans[1] == ans[2])
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        cout << ans[0] << " " << ans[1] << " " << ans[2];
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
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/