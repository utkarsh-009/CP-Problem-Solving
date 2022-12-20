#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    ll n, a[200001];

    map<ll, ll> mp;
    map<ll, ll>::iterator itr;

    set<ll> s;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        s.insert(a[i]);
    }

    ll m = 0;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        ll d = itr->second;
        m = max(m, d);
    }

    ll team1, team2;
    team1 = s.size(); // no of distinct skilled students
    team2 = m;        // no of same skilled students

    // Case1: when no of same skilled students < distinct skilled students => team2 will contain all same skilled students with maximum possible valid team size
    if (team1 > team2)
    {
        cout << team2 << endl;
    }
    // Case2: when no of same skilled students > distinct skilled students => team2 will contain all distinct skilled students with maximum possible valid team size
    else if (team1 < team2)
    {
        cout << team1 << endl;
    }
    // Case3: when both team size will be equal then one same skilled student will be sacrificied inorder to make maximum possible team size
    else
    {
        cout << team2 - 1 << endl;
    }
}

/*
9
2 9 3 2 2 8 7 4 3
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        // cout << '\n';
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/