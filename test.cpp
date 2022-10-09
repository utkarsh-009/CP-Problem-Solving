#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int bin[n];
    int cnt1 = 0, cnt0 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> bin[i];
        if (bin[i])
        {
            cnt1++;
        }
        else
        {
            cnt0++;
        }
    }

    cout << cnt1;
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