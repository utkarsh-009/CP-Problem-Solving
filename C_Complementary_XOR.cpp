#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
-> For all corresponding bits, either a[i] == b[i] or a[i] != b[i] for all values of i, else => NO
-> Hence, there will be two types of string
    Type1: String will be completed into 0's in n operations
    101 -> 000
    101    000

    Type2: String will be completed into 0's in (n+3) operations.
    0100 -> 0000
    1011    1111

-> In Type1: we flip all the 1's of a string. That is Type1 is flipped to Type2.
    010 -> 000
    101    000
    In Type2: we flip all the 1's of a string. That is Type2 is flipped to Type1
    01001 -> 00001 -> 00000 -> 10000 -> 11111 -> 00000
    10110    00001    11111    10000    00000    00000

=> All type1 and type2 strings can be converted into 0's in at worst n+3 operations when case is type2.
*/

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    ll isEqual;
    ((a[0] == b[0]) ? isEqual = true : isEqual = false);

    for (int i = 0; i < n; i++)
    {
        if ((a[i] == b[i]) != isEqual)
        {
            cout << "NO" << endl;
            return;
        }
    }

    vector<pair<int, int>> ans;
    // isEqual is type 1
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            ans.push_back({i + 1, i + 1});
            isEqual ^= 1; // Type is flipped
        }
    }

    if (!isEqual) // Type 2 => (n+3) operations
    {
        ans.push_back({1, 1});
        ans.push_back({2, n});
        ans.push_back({1, n});
    }

    cout << "YES" << endl;
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
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
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/