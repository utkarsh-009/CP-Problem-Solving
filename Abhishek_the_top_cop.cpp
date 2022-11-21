#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
There are 2 cases

1. If count[i] <= d where count[i] represents the number of cases the ith policeman knows some details about,
then he will solve count[i] cases in count[i] days and extra (d-count[i])/2 cases in the remaining days.

2. Otherwise if count[i] > d, he would be able to solve only d tasks and then the remaining cases (count[i] - d) could not be solved.
*/
bool isAnsValid(vector<int> count, int time)
{
    ll remain_time = 0, extra_time = 0;
    for (int i = 1; i < count.size(); i++)
    {
        ll curr_days = count[i];
        if (curr_days <= time)
        {
            remain_time += (time - count[i]) / 2;
        }
        else
        {
            extra_time += count[i] - time;
        }
    }

    return remain_time >= extra_time;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> count(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }

    ll low = 0, high = INT_MAX, ans;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (isAnsValid(count, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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