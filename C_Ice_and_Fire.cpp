#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Observations:
- if all 0's in the array then only the 1st player will win
- if all 1's in the array then only the n-th player will win

NOTE: Here, (x-1) battles for x players
in case where s[i-1] = 1 => everyone will win except the 1st
- if s[i] = 1 => everyone will win except the 1st => The new player can win => no of winners becomes equal to i+1 i.e. total no of players - 1 (dp[i] = i+1)
- if s[i] = 0 => everyone will win except the n-th player => The new player cannot win => no of winner remain same (dp[i] = dp[i-1])
*/

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> dp(n - 1); // Total n-1 battles
    dp[0] = 1;
    for (int i = 1; i < n - 1; i++)
    {
        ((s[i - 1] != s[i]) ? dp[i] = i + 1 : dp[i] = dp[i - 1]);
    }

    for (int x : dp)
    {
        cout << x << " ";
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