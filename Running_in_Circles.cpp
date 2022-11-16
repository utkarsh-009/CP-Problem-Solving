#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
- The machine only counts the lap when Ada runs in the same direction as the last lap
- For every runs:
    If direction changed => Ada needs to cover the (remaining dist from start + one whole round) inorder to count the lap
    If same direction => Just add len to dist
- lap will be incremented by dist/l and the remaining distance (dist%l) will be stored dist
*/
ll solve()
{
    ll l, n;
    cin >> l >> n;

    char curr_dir;
    ll lap = 0, dist = 0;
    for (int i = 0; i < n; i++)
    {
        ll len;
        char dir;
        cin >> len >> dir;
        // if direction changed => Ada needs to cover the (remaining dist from start + one whole round) inorder to count the lap
        if (curr_dir != dir)
        {
            if (dist > len)
            {
                dist -= len;
            }
            else
            {
                dist = len - dist;
                curr_dir = dir;
            }
        }
        // If same direction => Just add len to dist
        else
        {
            dist += len;
        }

        // lap will be incremented by dist/l and the remaining distance (dist%l) will be stored dist
        lap += (dist / l);
        dist %= l;
    }
    return lap;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": " << solve() << endl;
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/