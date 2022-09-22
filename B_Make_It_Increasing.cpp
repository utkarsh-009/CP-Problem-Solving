#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    // Increasing =>  prev < curr
    for (int i = n - 1; i >= 1; i--)
    {
        while (arr[i - 1] >= arr[i] && arr[i - 1] != 0)
        {
            arr[i - 1] = arr[i - 1] / 2;
            cnt++;
        }
    }

    bool isIncreasing = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            isIncreasing = false;
            break;
        }
    }

    ((isIncreasing) ? cout << cnt : cout << -1);
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