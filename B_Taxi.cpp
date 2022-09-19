#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int cnt = mp[3] + mp[4]; // Lower Bound of No of Group

    // 1 3 pair possible
    ((min(mp[1], mp[3]) == mp[3]) ? mp[1] -= mp[3] : mp[1] = 0);

    // 2 2 pair
    cnt += mp[2] / 2;
    if (mp[2] % 2 != 0)
    {
        cnt++;
        // 1 1 2 triplet possible or not
        mp[1] = max(0, mp[1] - 2); // mp[1] - 2 => As two 1's are used in 1 1 2 triplet
    }

    // 1 1 1 1 Quadruplet
    cnt += mp[1] / 4;
    if (mp[1] % 4 != 0)
    {
        cnt++;
    }

    cout << cnt;
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