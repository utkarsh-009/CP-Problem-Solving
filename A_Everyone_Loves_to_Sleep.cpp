#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
Intution: Converting the time to minutes and then: sleep_time = (alarm - bed_time);
if sleep_time < 0 => adding 24*60 to sleep_time
Hence, ans = min(ans, sleep_time);
time in 24H format = ans/60 + ans%60;
*/

void solve()
{
    int n;
    cin >> n;
    int time, H, M;
    cin >> H >> M;
    time = 60 * H + M;
    int ans = 24 * 60;
    for (int i = 0; i < n; ++i)
    {
        cin >> H >> M;
        int s_time = 60 * H + M - time;
        if (s_time < 0)
        {
            s_time += 24 * 60;
        }
        ans = min(ans, s_time);
    }
    cout << ans / 60 << " " << ans % 60;
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