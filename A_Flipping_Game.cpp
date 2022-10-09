#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> bin(n), idx0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bin[i];
        if (bin[i])
        {
            cnt++;
        }
        else
        {
            idx0.push_back(i);
        }
    }

    // Corner Case
    // Case1:
    if (n == 1)
    {
        if (bin[0])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }

        return;
    }

    // Case2:
    if (cnt == n)
    {
        cout << cnt - 1;
        return;
    }

    int sz = idx0.size();
    int k = 0, flips = 0;
    while (k < sz - 1)
    {
        int idx1 = idx0[k];
        int l = k + 1;
        while (l < sz)
        {
            int cnt1 = 0, cnt0 = 0;
            int idx2 = idx0[l];
            for (int i = idx1; i <= idx2; i++)
            {
                if (bin[i])
                {
                    cnt1++;
                }
                else
                {
                    cnt0++;
                }
            }

            if (cnt0 > cnt1)
            {
                flips = max(flips, cnt0 - cnt1);
            }
            l++;
        }
        k++;
    }

    cout << cnt + flips;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
1 0 0 1 0 1 1 1 0 0 1 1 1 1
1 1 0 0 0 1 0 0 0 0 0 1 1 0 0 1
*/