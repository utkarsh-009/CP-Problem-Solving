#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }

    ll sum = 0, ans = 1;
    for (int i = 1; i <= k; i++)
    {
        sum += h[i];
    }

    ll min_sum = sum;
    for (int i = k + 1; i <= n; i++)
    {
        sum += (h[i] - h[i - k]);
        if (sum < min_sum)
        {
            ans = i - k + 1;
            min_sum = sum;
        }
    }

    cout << ans;
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