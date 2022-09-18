#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.insert(x);
    }

    int distinct_nums = s.size(); // No of distinct elements in set

    for (int k = 1; k <= n; k++)
    {
        if (k <= distinct_nums) // Until team size <= distinct nums => Sum of strengths will be equal to distinct nums
        {
            cout << distinct_nums << " ";
        }
        else // After team size > distinct nums => Sum of strengths gets increased by 1 after every iteration
        {
            distinct_nums++;
            cout << distinct_nums << " ";
        }
    }
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