#include <bits/stdc++.h>
using namespace std;
#define ll long long

// digital root of ans = x (ans should be minimum possible number)
int digRoot(ll num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

void solve()
{
    ll x;
    cin >> x;

    if (x < 10)
    {
        cout << x;
        return;
    }

    else if (x > 45)
    {
        cout << -1;
        return;
    }

    bool found = false;
    ll ans = 9;
    set<int> s = {1, 2, 3, 4, 5, 6, 7, 8};

    while (s.size() + 1 != 0)
    {
        int dr = digRoot(ans);
        if (dr == x)
        {
            found = true;
            break;
        }

        if (x - dr < 10 && s.find(x - dr) != s.end())
        {
            ll num = x - dr, p = floor(log10(ans)) + 1;
            ans = num * pow(10, p) + ans;
            s.erase(num);
        }
        else
        {
            ll num = *s.rbegin(), p = floor(log10(ans)) + 1;
            ans = num * pow(10, p) + ans;
            s.erase(num);
        }
    }

    ((found) ? cout << ans : cout << -1);
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