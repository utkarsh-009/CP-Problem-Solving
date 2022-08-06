#include <bits/stdc++.h>
using namespace std;

void prntPerm(vector<int> &v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
}

void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    cout << n << endl;

    int high = n - 1, low = 0;
    for (int i = 0; i < n; i++)
    {
        prntPerm(v);
        cout << endl;
        swap(v[low], v[high]);
        ((i % 2 == 0) ? low++ : high--);
    }
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
    }

    return 0;
}