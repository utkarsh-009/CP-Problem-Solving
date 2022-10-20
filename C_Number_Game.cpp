#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        a.insert(x);
    }

    int k = 0;
    bool ok = true;
    while (ok)
    {
        for (int i = 0; i <= k; i++)
        {
            int x = k - i + 1;
            int first = *a.begin();

            if (first <= x && !a.empty())
            {
                auto it = a.begin();
                while (it != a.end() && x > *it)
                {
                    it++;
                }

                if (it == a.end())
                {
                    it--;
                }

                a.erase(it);
                a.insert(x);
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok == false)
        {
            break;
        }
        k++;
    }
    cout << k;
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