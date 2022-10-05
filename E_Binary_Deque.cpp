#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum;
    cin >> n >> sum;

    vector<int> a(n + 1);
    // vector<int> preSum(n + 1);
    // preSum[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // preSum[i] = preSum[i - 1] + a[i];
    }

    int max_sz = INT_MIN;
    int i = 0, j = 0, curr_sum = 0;
    while (j < n)
    {
        curr_sum += a[j];
        if (curr_sum < sum)
        {
            j++;
        }
        else if (curr_sum == sum)
        {
            max_sz = max(max_sz, j - i + 1);
            j++;
        }
        else if (curr_sum > sum)
        {
            while (curr_sum > sum)
            {
                curr_sum -= a[i];
                i++;
            }

            if (curr_sum == sum)
            {
                max_sz = max(max_sz, j - i + 1);
            }
            j++;
        }
    }

    if (max_sz == INT_MIN)
    {
        cout << -1;
        return;
    }

    cout << n - max_sz;
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
