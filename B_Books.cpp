#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> readTime(n);

    for (int i = 0; i < n; i++)
    {
        cin >> readTime[i];
    }

    int sum = 0, k = 0, maxB = INT_MIN, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += readTime[i];
        if (sum <= t)
        {
            cnt++;
            maxB = max(maxB, cnt);
        }
        else
        {
            sum -= readTime[k];
            k++;
        }
    }

    ((maxB == INT_MIN) ? cout << 0 : cout << maxB);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/* M2: finding presum + binary search
int binSearch(vector<ll> &preSum, int target)
{
    int low = 0, hi = preSum.size() - 1;
    while (low <= hi)
    {
        int mid = low + (hi - low) / 2;
        if (preSum[mid] == target)
            return mid;
        else if (preSum[mid] < target)
            low = mid + 1;
        else
            hi = mid - 1;
    }
    return min(low, hi);
}
void solve()
{

    int n, t;
    cin >> n >> t;

    vector<ll> mins(n), preSum(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> mins[i];
        sum += mins[i];
        preSum[i] = sum;
    }

    int maxB = 0;
    for (int i = 0; i < n; i++)
    {
        int j = binSearch(preSum, t + preSum[i] - mins[i]);
        maxB = max(maxB, j - i + 1);
    }

    cout << maxB;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
*/
