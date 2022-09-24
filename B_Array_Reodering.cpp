#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool myCmp(int a, int b)
{
    if (a % 2 < b % 2)
    {
        return true;
    }

    return false;
}

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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), myCmp);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (gcd(arr[i], 2 * arr[j]) > 1)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
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