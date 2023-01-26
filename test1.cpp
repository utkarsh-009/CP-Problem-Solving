#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += max(a[i], b[i]);
    }

    cout << sum;
}