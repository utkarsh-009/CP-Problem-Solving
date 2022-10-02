#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int curr_min = INT_MAX, curr_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        curr_min = min(curr_min, a[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (2 * curr_min > a[i])
        {
            curr_max = max(curr_max, a[i]);
        }
        else
        {
            if (a[i] / curr_max >= 2)
            {
                int mf = a[i] / curr_max;
                int rem = a[i] - (mf * curr_max);
                int newVal = curr_max + rem / mf;

                curr_max = max(curr_max, newVal);
                curr_min = min(curr_min, newVal);

                cnt += mf;
            }
            else
            {
                int mf = a[i] / curr_min;
                int rem = a[i] - (mf * curr_min);
                int newVal = curr_min + rem / mf;

                curr_max = max(curr_max, newVal);
                curr_min = min(curr_min, newVal);

                cnt++;
            }
        }
    }

    cout << cnt;
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