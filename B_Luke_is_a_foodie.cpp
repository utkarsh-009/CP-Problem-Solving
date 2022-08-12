#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
Intution:
( ai - x <= v <= ai + x ) => Length of range is 2*x = (ai + x) - (ai - x)
This means that no matter what we do, if difference betn maxi. and mini. in range is > 2*x => We have to change value inorder to satify eqn
We have to check for next range where difference betn maxi. and mini. in range is <= 2*x. Else we have to change value again.

Test Case:
5 3
3 10 9 8 7
=> 2*x = 6
mx = 3, mn = 3 (mx - mn < 2*x) [cnt = 0]
mx = 10, mn = 3 (mx - mn > 2*x) => mx = 10, mn = 10 [cnt = 1]
mx = 10, mn = 9 (mx - mn < 2*x) [cnt = 1]
mx = 10, mn = 8 (mx - mn < 2*x) [cnt = 1]
mx = 10, mn = 7 (mx - mn < 2*x) [cnt = 1]
*/

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    int mn = v[0], mx = v[0];
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);

        if (mx - mn > 2 * x)
        {
            mx = mn = v[i];
            cnt++;
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