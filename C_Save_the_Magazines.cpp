#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<char> lid(n);
    vector<int> mags(n);

    int cnt1 = 0, last1 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> lid[i];
        if (lid[i])
        {
            cnt1++;
            last1 = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> mags[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (lid[i] == '1' && lid[i - 1] == '0')
        {
            if (mags[i - 1] > mags[i])
            {
                lid[i] = '0';
                lid[i - 1] = '1';

                i--;
            }
        }
    }

    int i = 0, k = cnt1;
    int curr_sum = 0;
    while (i <= last1)
    {
        curr_sum = mags[i];
        i++;
    }
    int max_sum = curr_sum;
    while (i <= last1)
    {
        curr_sum += (mags[i] - mags[i - k]);
        max_sum = max(max_sum, curr_sum);

        i++;
    }

    for (int i = 0; i < n; i++)
    {
        if (lid[i] == '1')
        {
            ans += mags[i];
        }
    }

    cout << max(ans, max_sum);
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