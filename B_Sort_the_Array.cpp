#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> a = v;
    sort(v.begin(), v.end());

    if (a == v)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return;
    }

    int low = 0, high = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            low = i;
            high = low + 1;
            break;
        }
    }

    for (int i = high; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            high = i;
        }
        else
        {
            break;
        }
    }

    sort(a.begin() + low, a.begin() + high + 1);

    if (a == v)
    {
        cout << "yes" << endl;
        cout << low + 1 << " " << high + 1;
        return;
    }

    cout << "no" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}