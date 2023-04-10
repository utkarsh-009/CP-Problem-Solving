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
    int n, k;
    cin >> n >> k;

    string ans = "";
    for (int i = 0; i < k; i++)
    {
        ans += ('a' + i);
    }

    if (n <= k)
    {
        cout << ans.substr(0, n);
    }
    else if (n <= 2 * k)
    {
        string rev = reverse(ans.begin(), ans.end());
        ans += rev;
        cout << ans.substr(0, n);
    }
    else
    {
        int k = 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
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