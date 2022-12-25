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

    vector<int> a{5, 1, 2, 4, 3};
    sort(a.begin(), a.end());

    int n = 5, l = 5, r = 8;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = a[i];
        int idx1 = upper_bound(a.begin(), a.begin() + i + 1, abs(r - x)) - a.begin();
        int idx2 = upper_bound(a.begin(), a.begin() + i + 1, abs(x - l)) - a.begin();

        if (a[idx1] == r)
        {
            idx1--;
        }
        if (a[idx2] == l)
        {
            idx2--;
        }
        cout << idx1 << " " << idx2 << endl;

        ans += (idx1 - idx2);
    }

    cout << ans;
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