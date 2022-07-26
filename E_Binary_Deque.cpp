#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum;
    cin >> n >> sum;

    vector<int> ind1;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x)
        {
            total += x;
            ind1.push_back(x);
        }
    }

    if (total < sum)
    {
        cout << -1;
        return;
    }

    if (total == sum)
    {
        cout << 0;
        return;
    }

    int l = 0, r = n - 1;
    int low = 0, high = ind1.size() - 1;
    int diff = total - sum;

    int tOper = 0;
    while (diff != 0 && low != high)
    {
        int oper = 0;
        int x1 = ind1[low] - l;
        int x2 = ind1[high] - r;

        if (min(x1, x2) == x1)
        {
            oper += ind1[low] - l + 1;
            low++;
            tOper += oper;
            l += x1;
            diff--;
        }

        else if (min(x1, x2) == x2)
        {
            oper += ind1[high] - r + 1;
            high--;
            tOper += oper;
            r -= x2;
            diff--;
        }
    }

    cout << tOper;
    return;
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