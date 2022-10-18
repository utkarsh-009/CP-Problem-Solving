#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Breaking every consecutive 1's subarray into two segments such that optimal solution for that segments is obtained
Test Case 1:
    4
    0111
    5 4 5 1

->Handling corner cases
    -> 1 box added at first, to calculate value when all boxes are 1 1 1
    -> 1 box added at last, to push_back the curr_better if last box with lid needed to be shift
-> 0111 => 001110
-> lastIdx = 1,
    C1: 0 1 0 1 1 0, curr_better = max(0, 1) = 1
    C2: 0 1 1 0 1 0, curr_better = max(1, 0) = 1
    C3: 0 1 1 1 0 0, curr_better = max(1, 4) = 4
-> ans = 4 + 5 + 1 = 10
-> ans = 10 + 4 = 14

Test Case 2:
    2
    11
    9424 3798
=> 0110
-> lastIdx = 0,
    C1: 0 1 0 1 1 0, curr_better = max(0, -9424) = 0
    C2: 0 1 1 0 1 0, curr_better = max(0, -3798) = 0
=> ans = 9242 + 3798
=> ans = 13222  + 0 = 13222
*/

void solve()
{
    int n;
    cin >> n;

    string lid;
    cin >> lid;
    lid = "0" + lid + "0";

    vector<ll> a(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> better;
    ll ans = 0, curr_better = 0, last0Idx = 0;
    for (int i = 0; i < n + 2; i++)
    {
        if (lid[i] == '0')
        {
            better.push_back(curr_better);
            curr_better = 0;
            last0Idx = i;
        }
        else
        {
            curr_better = max(curr_better, a[last0Idx] - a[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (lid[i] == '1')
        {
            ans += a[i];
        }
    }

    for (int i = 0; i < better.size(); i++)
    {
        ans += better[i];
    }

    cout << ans;
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