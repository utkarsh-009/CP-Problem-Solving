#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
// Inefficient Solution // TC: O(n*n*n)
void solve()
{
    int n;
    cin >> n;

    set<int> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        s.insert(x);
    }

    int sz = s.size();
    for (int i = 1; i < n; i++)
    {
        int x = a[i - 1], y = a[i];
        if (x > y)
        {
            s.erase(x);
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x)
                {
                    a[j] = 0;
                    i = 0;
                }
            }
        }
    }

    cout << sz - s.size();
}
*/

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
