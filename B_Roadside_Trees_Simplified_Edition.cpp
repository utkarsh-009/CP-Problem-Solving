#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int sec = h[0], currH = h[0];
    for (int i = 1; i < n; i++)
    {
        sec += abs(h[i - 1] - h[i]) + 1; // Jump + Reaching Next Tree's top
    }

    cout << sec + n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}