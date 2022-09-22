#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int minNoOfStepsToMake0(int n)
{
    if (n < 10)
    {
        return 0;
    }

    int res = INT_MAX;
    int temp = n;
    while (temp > 0)
    {
      
    }

    return res;
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