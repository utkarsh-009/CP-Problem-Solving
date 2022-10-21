#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Possible subarray solution:
1. Completely increasing => 1,2,3,4,5 => Already Sorted
2. Completely decreasing => 5,4,3,2,1 => -5,-4,-3,-2,-1 => Sorted Through Operation
3. Decreasing and then Increasing => 5,4,1,2,3 => -5,-4,1,2,3 => Sorted Through Operation

-> inc and dec array to store no of element that are part of increasing/decreasing array from ith index
-> inc and dec prefix array also stores no of subarrays that can be formed
*/
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // inc and dec array to store no of element that are part of increasing/decreasing array from ith index
    vector<int> inc(n), dec(n);
    inc[n - 1] = 1, dec[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        ((a[i] > a[i + 1]) ? dec[i] = dec[i + 1] + 1 : dec[i] = 1);
        ((a[i] < a[i + 1]) ? inc[i] = inc[i + 1] + 1 : inc[i] = 1);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (inc[i] > 1)
        {
            ans = ans + inc[i];
        }
        else if (dec[i] > 1)
        {
            ans = ans + dec[i];
            int j = i + dec[i];
            if (j < n)
            {
                ans = ans + inc[j];
            }
        }
        else
        {
            ans++;
        }
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