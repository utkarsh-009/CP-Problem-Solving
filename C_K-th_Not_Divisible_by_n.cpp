#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = k + floor((k - 1) / (n - 1));

    cout << ans;
}
*/

int binSearch(int n, int k)
{
    int low = 1, high = INT_MAX;
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int x = mid - mid / n; // Total no of integers below mid that are not divisible by x

        if (x == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (x < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cout << binSearch(n, k);
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