#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int cntCombs(int n)
{

    // Base Case
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    int cnt = 0;
    for (int i = 1; i <= 6; i++)
    {
        cnt += cntCombs(n - i);
    }

    return cnt;
}

void solve()
{
    int n;
    cin >> n;

    cout << cntCombs(n);
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