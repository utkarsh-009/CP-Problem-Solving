#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<pair<int, int>> kt;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int hk, ak;
        cin >> hk >> ak;
        kt.push_back(make_pair(hk, ak));
        mp[hk]++;
    }

    for (auto it = kt.begin(); it != kt.end(); it++)
    {
        int hk = (n - 1) + mp[it->second];
        int ak = (n - 1) - mp[it->second];

        cout << hk << " " << ak << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
