#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n;
    cin >> n;

    ll cnt = 0;
    set<int> s;

    while (n != 1)
    {
        s.insert(n);
        if (n % 6 == 0)
        {
            n = n / 6;
            if (s.find(n) != s.end())
            {
                cnt = -1;
                break;
            }
        }
        else
        {
            n = n * 2;
            if (s.find(n) != s.end())
            {
                cnt = -1;
                break;
            }
        }
        cnt++;
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

    return 0;
}