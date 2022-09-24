#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
RECURSIVE SOLUTION
*/

// DP
ll minNoOfStepsToMake0(int n)
{
    vector<ll> minSteps(n + 1, INT_MAX);
    minSteps[0] = 0;

    for (int val = 1; val <= n; val++)
    {
        ll temp = val;
        while (temp > 0)
        {
            minSteps[val] = min(minSteps[val], minSteps[val - temp % 10] + 1);
            temp /= 10;
        }
    }

    return minSteps[n];
}

void solve()
{
    int n;
    cin >> n;

    cout << minNoOfStepsToMake0(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/