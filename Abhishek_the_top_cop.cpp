#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        
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