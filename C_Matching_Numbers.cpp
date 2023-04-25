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

    if (n % 2 == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;

        int m = (n - 1) / 2;
        vector<int> v1, v2;
        for (int i = 1; i <= n; i++)
        {
            v1.push_back(2 * m + 1);
            v2.push_back(3 * m + 2);
        }

        map<int, pair<int, int>> mp;
        for (int i = 0; i < v1.size(); i++)
        {
            int x = v1[i], y = v2[i];
            mp[x + y] = {x, y};
        }

        for (auto x : mp)
        {
            cout << x.second.first << " " << x.second.second << endl;
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