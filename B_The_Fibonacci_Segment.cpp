#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int count = 2, max_count = 0;
    bool isGood = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n <= 2)
    {
        cout << n;
        return;
    }

    for (int i = 2; i < n; i++)
    {

        if (arr[i - 1] + arr[i - 2] == arr[i])
        {
            isGood = true;
            count++;
        }

        else
        {
            count = 2;
        }
        max_count = max(max_count, count);
    }

    cout << max_count;
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