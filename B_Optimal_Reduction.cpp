#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* //TLE TC: O(n2)
void solve()
{
    int n;
    cin >> n;

    int mx = INT_MIN;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v[i] = x;
        mx = max(mx, x);
    }

    int low = 0, high = n - 1, cnt = 0;
    while (low <= high)
    {
        int sub = min(v[low], v[high]);
        for (int i = low; i <= high; i++)
        {
            if (v[i] - sub < 0)
            {
                cout << "NO";
                return;
            }
            else
            {
                v[i] -= sub;
            }
        }
        cnt += sub;

        if (v[low] == 0)
        {
            low++;
        }
        if (v[high] == 0)
        {
            high--;
        }
    }

    if (cnt == mx)
    {
        cout << "YES";
        return;
    }
    else
    {
        cout << "NO";
        return;
    }
}
*/

/*
Intuition: The minimum operation req will not be less than M (Maximum element present in the array)
Any permutation that will
Inc / Dec / Inc and then Dec
inc(0/1) and dec(0/1) to check whether function if increasing / decreasing.
if a[i-1] > a[i] && dec == 0 => inc = 1 else flag = 1 and break;
if a[i-1] < a[i] => dec = 1
*/
void solve()
{
    int n;
    cin >> n;

    ll i, j, inc, dec, flag;
    ll a[n];

    inc = dec = 0;
    flag = 0;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            if (dec == 0)
            {
                inc = 1;
            }
            else
            {
                flag++;
                break;
            }
        }
        else if (a[i] < a[i - 1])
        {
            dec = 1;
        }
    }
    if (flag == 0)
        cout << "YES";
    else
        cout << "NO";
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

    return 0;
}