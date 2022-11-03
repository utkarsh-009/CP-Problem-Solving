#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> mp;

    int f_max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        f_max = max(f_max, mp[arr[i]]);
    }

    int ans = n;
    for (auto m : mp)
    {
        int x = 0;

        // As two numbers x and y we must have xor(x, y) <=1 => Their bits should differ at 1st bit
        if (m.first & 1) // 1st-bit is set
        {
            x = m.first - 1; // x is number with 1st bit as unset
        }
        else // 1st-bit is unset
        {
            x = m.first + 1; // x is number with 1st bit as set
        }

        int f = m.second;
        auto it = mp.find(x);
        if (it != mp.end())
        {
            f += mp[x];
        }
        ans = min(ans, n - f); // Highest frequency x,y will be the only once that will remain in array.
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