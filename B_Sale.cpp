#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
        {
            v[i] = -v[i];
        }

        else
        {
            break;
        }
        sum += v[i];
    }

    cout << sum;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
