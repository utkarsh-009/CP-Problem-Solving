#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> f, s;
    ll sum = 0;
    bool first = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        ((x > 0) ? f.push_back(x) : s.push_back(x));

        if (i == n - 1)
        {
            ((x > 0) ? first = true : first = false);
        }
    }

    if (sum > 0)
    {
        cout << "first";
        return;
    }

    else if (sum < 0)
    {
        cout << "second";
        return;
    }

    bool same = true;
    ll fr = 0, sr = 0;
    for (int i = 0; i < f.size(); i++)
    {
        if (abs(f[i]) != abs(s[i]))
        {
            fr = f[i];
            sr = s[i];
            same = false;
            break;
        }
    }

    if (same == true)
    {
        ((first == true) ? cout << "first" : cout << "second");
        return;
    }

    else
    {

        if (abs(fr) > abs(sr))
        {
            cout << "first";
        }
        else
        {
            cout << "second";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}