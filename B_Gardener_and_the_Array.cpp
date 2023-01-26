#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    unordered_map<ll, ll> mp; // to store occurence of set bits
    vector<vector<int>> vv;   // stores all set bits of number ci

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        vv.push_back(v);
    }

    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        ans = true;
        for (int j : vv[i])
        {
            /*
           if occurence of any bit is greater than 1 => hence after removing one set bit, it will not affect the OR but
           if occurence of any bit is less than or equal to 1 then it will affect the OR.
            */
            if (mp[j] <= 1)
            {
                ans = false;
            }
        }

        // if any sequence all the of its set bits >= 1 => Subsequence can be made
        if (ans)
        {
            cout << "Yes";
            return;
        }
    }

    if (!ans)
    {
        cout << "No";
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
        cout << '\n';
    }
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/