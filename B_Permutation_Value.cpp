#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int x = 1;
    int i = 0, j = ((n % 2 == 0) ? n - 1 : n - 2);

    while (i < n)
    {
        a[i] = x;
        i += 2;
        x++;
    }

    while (j > 0)
    {
        a[j] = x;
        j -= 2;
        x++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/