#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
b = 2*a + x, (b = sum of all elements of array b, a = sum of all elements of array a)
x = b - 2*a;
a is present at nth or n+1th position after sorting
*/
void prntAns(vector<int> b, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        if (b[i] > 0)
        {
            cout << b[i] << " ";
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> b(n + 2);
    for (int i = 0; i < n + 2; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    int n1 = b[n], n2 = b[n + 1];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += b[i];
    }

    if (sum == n1)
    {
        auto l = lower_bound(b.begin(), b.end(), )
    }
    else if (sum == n2)
    {
    }
    else
    {
        cout << -1;
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
9 1 7 1 6 5
1 1 5 6 7 9 => sum = 13, b[n] = 7, b[n+1] = 9
*/