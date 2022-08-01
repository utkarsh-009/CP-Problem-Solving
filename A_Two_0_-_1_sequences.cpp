#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSame(string a, string b)
{
    if (a == b)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    string a;
    cin >> a;
    string b;
    cin >> b;

    bool possible = false;
    int mn = 0, mx = 0;

    if (a == b)
    {
        cout << "YES";
        return;
    }

    while (n >= m)
    {
        int a1 = a[0] - '0', a2 = a[1] - '0';
        if (b[0] == '0')
        {
            mn = min(a1, a2);
            a.erase(a.begin());
            a[0] = mn + 48;
            if (isSame(a, b))
            {
                cout << "YES";
                return;
            }
        }

        else
        {
            mx = max(a1, a2);
            a.erase(a.begin());
            a[0] = mx + 48;
            if (isSame(a, b))
            {
                cout << "YES";
                return;
            }
        }
        n--;
    }

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
}