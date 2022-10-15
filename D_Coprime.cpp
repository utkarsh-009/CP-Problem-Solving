#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = INT_MIN;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        m[arr[i]] = i;
    }
    for (int i = 1; i <= 1000; i++) 
    {
        for (int j = i; j <= 1000; j++)
        {
            if (m[i] != 0 && m[j] != 0 && gcd(i, j) == 1)
            {
                ans = max(ans, m[i] + m[j]);
            }
        }
    }

    if (ans == INT_MIN)
        cout << -1;
    else
        cout << ans;
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